#include <stdio.h> //Bibliotecas utilizadas no programa
#include <stdlib.h>

int main()
{
    float n[6]; //Vetor para armazenar os valores de entada
    int p = 0;  //Variável para guardar quantos números são positivos

    //Recebimento dos números
    for (int i = 0; i < 6; i++)
    {
        fflush(stdin);
        scanf("%f", &n[i]);
    }

    //Contagem de quantos são positivos
    for (int i = 0; i < 6; i++)
    {
        if (n[i] > 0)
            p = p + 1;
    }

    //Exibe quantos são positivos
    printf("%i valores positivos\n", p);

    return (0);
}