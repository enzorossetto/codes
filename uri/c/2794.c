#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  int distance;
  int tonality;
} Mount;

void swap(Mount *a, Mount *b)
{
  Mount holder;
  holder = *a;
  *a = *b;
  *b = holder;
}

void partition(Mount mounts[], int start, int end, int *i, int *j)
{
  Mount middle;
  *i = start;
  *j = end;
  middle = mounts[(*i + *j) / 2];

  do
  {
    while (mounts[*i].distance < middle.distance)
    {
      *i = *i + 1;
    }
    while (middle.distance < mounts[*j].distance)
    {
      *j = *j - 1;
    }
    if (*i <= *j)
    {
      swap(&mounts[*i], &mounts[*j]);
      *i = *i + 1;
      *j = *j - 1;
    }
  } while (*i <= *j);
}

void sort(Mount mounts[], int start, int end)
{
  int i, j;
  partition(mounts, start, end, &i, &j);

  if (start < j)
  {
    sort(mounts, start, j);
  }
  if (i < end)
  {
    sort(mounts, i, end);
  }
}

void quickSort(Mount mounts[], int n) { sort(mounts, 1, n); }

int main()
{
  int n; // number of mount

  scanf("%d", &n);

  Mount mounts[n + 1];

  for (int i = 1; i <= n; i++)
  {
    scanf("%d %d", &mounts[i].distance, &mounts[i].tonality);
  }

  quickSort(mounts, n);

  int lighter = mounts[1].tonality, flag = 1;

  for (int i = 2; i <= n; i++)
  {
    if (mounts[i].tonality < lighter)
    {
      lighter = mounts[i].tonality;
    }
    else
    {
      flag = 0;
      printf("N\n");
      break;
    }
  }

  if (flag == 1)
  {
    printf("S\n");
  }

  return (0);
}
