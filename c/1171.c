#include <stdio.h> //Bibliotecas utilizadas no programa
#include <stdlib.h>

int main()
{
    int q, n[2000] = {0}, c; //Variaveis para recebimento e armazenagem de valores

    scanf("%i", &q); //Recebimento da quantia de entradas

    for (int i = 0; i < q; i++)
    {
        scanf("%i", &c); //Recebimento dos números
        n[c - 1] = n[c - 1] + 1;
    }

    for (int i = 0; i < 2000; i++)
    {

        //Printa a quantia do número caso ele exista na entrada de dados
        if (n[i] > 0)
            printf("%i aparece %i vez(es)\n", i + 1, n[i]);
    }

    return (0);
}
