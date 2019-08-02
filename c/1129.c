#include <stdio.h> //Bibliotecas utilizadas no programa
#include <stdlib.h>
int verif(int V[])
{
    int cont = 0;

    for (int i = 0; i < 5; i++)
    {
        if (V[i] <= 127)
            cont = cont + 1;
    }
    return (cont);
}

void resp(int V[], int c)
{
    int p;
    if ((c == 0) || (c > 1))
        printf("*\n");
    else
    {
        for (int i = 0; i < 5; i++)
        {
            if (V[i] <= 127)
                p = i;
        }
        switch (p)
        {
        case 0:
            printf("A\n");
            break;
        case 1:
            printf("B\n");
            break;
        case 2:
            printf("C\n");
            break;
        case 3:
            printf("D\n");
            break;
        case 4:
            printf("E\n");
        }
    }
}

int main()
{
    int N, Q[5];

    do
    {
        scanf("%i", &N);
        if (N > 0)
        {
            for (int i = 1; i <= N; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    scanf("%i", &Q[j]);
                }
                resp(Q, verif(Q));
            }
        }
    } while (N != 0);

    return (0);
}
