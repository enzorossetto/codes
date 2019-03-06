#include <stdio.h> //Bibliotecas utilizadas no programa
#include <stdlib.h>

int main()
{
    int Q, N, B[31][2], P, x;
    char L;

    do
    {
        P = 0;
        Q = 0;

        for (int i = 0; i < 31; i++)
        {
            B[i][0] = 0;
            B[i][1] = 0;
        }

        x = scanf("%i", &Q);

        if (x != EOF)
        {
            for (int i = 0; i < Q; i++)
            {
                scanf("%i %c", &N, &L);

                if (L == 'E')
                    B[N - 30][0] = B[N - 30][0] + 1;
                else
                    B[N - 30][1] = B[N - 30][1] + 1;
            }

            for (int i = 0; i < 31; i++)
            {
                if (B[i][0] == B[i][1])
                    P = P + B[i][0];
                else
                {
                    if (B[i][0] < B[i][1])
                        P = P + B[i][0];
                    else
                        P = P + B[i][1];
                }
            }

            printf("%i\n", P);
        }

    } while (x != EOF);

    return (0);
}
