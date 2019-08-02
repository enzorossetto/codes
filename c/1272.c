#include <stdio.h>
#include <string.h>

int main()
{

  int strings;
  char c;
  scanf("%d\n", &strings);

  for (int i = 0; i < strings; i++)
  {
    do
    {
      scanf("%c", &c);
      if ((c != '\n') && (c != ' '))
      {
        printf("%c", c);

        while ((c != '\n') && (c != ' '))
        {
          scanf("%c", &c);
        }
      }
    } while (c != '\n');

    printf("%c", c);
  }

  return 0;
}
