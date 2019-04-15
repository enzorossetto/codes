#include <stdio.h>

int main()
{
  int t; // trials of the day

  while (scanf("%d", &t) != EOF)
  {
    float run,       // receives the time of an attempt
        fast = 12.0; // saves the shortest time since it won't be longer than 12.0 seconds

    for (int i = 0; i < t; i++)
    {
      scanf("%f", &run);

      if (run < fast)
      {
        fast = run;
      }
    }
    printf("%.2f\n", fast);
  }

  return (0);
}