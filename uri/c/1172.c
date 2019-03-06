#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[10];
    int i;
    for (i = 0; i < 10; i++) // laço para receber dados.
    {
        scanf("%i", &x[i]);
        if (x[i] <= 0)
        { //Troca dos valores menores ou iguais a 0 por 1.
            x[i] = 1;
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("X[%i] = %i\n", i, x[i]); //Impressão do vetor
    }
    return 0;
}
