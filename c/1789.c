#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int v[500]; // máximo de 500 lesmas.
    int maior;
    while ((scanf("%i", &i)) != EOF)
    { // scanf do número de lesmas.
        for (j = 0; j < i; j++)
        {
            scanf("%i", &v[i]); //scanf da velocidade das lesmas.
            if (j == 0)
            {
                maior = v[i]; //primeira lesma entra como a mais rápida.
            }
            else if (v[i] > maior)
            {
                maior = v[i]; // comparação das velocidades
            }
        }
        if (maior < 10)
        { // resultados.
            printf("1\n");
        }
        else if (maior < 20)
        {
            printf("2\n");
        }
        else
        {
            printf("3\n");
        }
    }
    return 0;
}
