#include <stdio.h> // Bibliotecas utilizadas
#include <stdlib.h>

int main()
{
    float precos[5] = {4.00, 4.50, 5.00, 2.00, 1.50}; //String com os valores para simplificar o programa.
    int C, Q;                                         //Variáveis que receberão os valores digitados.

    scanf("%i %i", &C, &Q); //Recebe os valores.

    printf("Total: R$ %.2f\n", Q * precos[C - 1]); //Printa a quantia a ser paga.

    return (0);
}
