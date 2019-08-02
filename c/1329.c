#include <stdio.h> //Bibliotecas utilizadas no programa
#include <stdlib.h>

int main()
{
    int G;

    do
    {
        scanf("%i", &G);
        int c, j = 0, m = 0;

        if (G != 0)
        {
            int c, j = 0, m = 0;
            for (int i = 1; i < G; i++)
            {
                scanf("%i ", &c);
                if (c == 0)
                    m = m + 1;
                else
                    j = j + 1;
            }

            scanf("%i ", &c);
            if (c == 0)
                m = m + 1;
            else
                j = j + 1;

            printf("Mary won %i times and John won %i times\n", m, j);
        }

    } while (G != 0);

    return (0);
}