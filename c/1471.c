#include <stdio.h> //Bibliotecas utilizadas
#include <stdlib.h>

int main()
{
    int N, R, p;

    while (scanf("%i", &N) != EOF)
    {
        int f[10000] = {0};

        scanf("%i", &R);

        for (int i = 0; i < R; i++)
        {
            scanf("%i", &p);
            f[p - 1] = 1;
        }

        if (N == R)
            printf("*\n");
        else
        {
            for (int i = 0; i < N; i++)
            {
                if (f[i] != 1)
                    printf("%i ", i + 1);
            }
            printf("\n");
            fflush(stdin);
        }
    }

    return (0);
}