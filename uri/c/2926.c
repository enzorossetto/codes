#include <stdio.h>

int main()
{
  int i, j; // number of 'As'
  scanf("%d", &i);

  char a[i];
  for (j = 0; j < i; j++)
  {
    a[j] = 'a';
  }
  a[j] = '\0';

  printf("Ent%so eh N%st%sl!\n", a, a, a);

  return (0);
}