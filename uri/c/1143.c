#include <stdio.h> //Bibliotecas utilizadas no programa
#include <stdlib.h>

int main()
{
    int N; //Variável que recebe o valor de entrada

    scanf("%i", &N); //Recebimento do valor

    //Contador para aumentar de um a um o número que será apresentado junto com o seu quadrado e cubo
    for (int i = 1; i <= N; i++)
    {
        printf("%i %i %i\n", i, i * i, i * i * i); //Mostra o número, quadrado e cubo
    }

    return (0);
}
