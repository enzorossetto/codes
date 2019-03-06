#include <stdio.h> //Bibliotecas utilizadas no programa
#include <stdlib.h>

int main()
{
    float Idade, soma = 0.0; //Variáveis utilizadas para receber dados e armazenar a soma das entradas
    int quantia = 0;         //Variável utilizada para armazenar a quantia de entradas válidas

    //Loop para recebimento de dados
    do
    {
        scanf("%f", &Idade); //Recebimento do valor
        if (Idade >= 0)
        { //Condição para a soma
            soma = soma + Idade;
            quantia = quantia + 1;
        }
    } while (Idade >= 0); //Condição para manter o loop

    printf("%.2f\n", (float)soma / quantia); //Mostra o resultado da média das entradas

    return (0);
}
