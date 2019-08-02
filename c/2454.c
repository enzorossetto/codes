#include <stdio.h> //Bibliotecas utilizadas
#include <stdlib.h>

int main()
{
    int P, R; //Variáveis para recebimento das posições das portas

    scanf("%i %i", &P, &R); //Recebimento das posições das portas

    //Verificação das posições das portas para indicar para onde a bola irá
    if (P == 0)
        printf("C\n");

    else if (R == 0)
        printf("B\n");

    else
        printf("A\n");

    return (0);
}
