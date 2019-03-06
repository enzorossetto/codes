#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p, n, i;
    int alturas[100];
    int diferenca_altura = 0;
    scanf("%i %i", &p, &n);
    for (i = 0; i < n; i++)
    {
        scanf("%i", &alturas[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        diferenca_altura = alturas[i + 1] - alturas[i];
        if (diferenca_altura < 0)
        {
            diferenca_altura = diferenca_altura * (-1);
        }
        if (diferenca_altura > p)
        {
            printf("GAME OVER\n");
            return 0;
        }
        diferenca_altura = 0;
    }
    printf("YOU WIN\n");
    return 0;
}
