#include <stdio.h>
#include <stdlib.h>

struct cardapio
{
    int codigo;
    int quantidade;
    float valor;
};

int main()
{
    struct cardapio precos[5] = {0};   // vetor coom os valores de cada produto.;
    struct cardapio pedido[500] = {0}; // vetor que recebera o pedido.;
    int i, j, quant;
    float soma = 0.0;
    scanf("%i", &quant); // quantidade de produtos

    for (i = 0; i < 5; i++) // for para definir os valores do cardápio.
    {
        precos[i].codigo = 1001 + i; // esses são os códigos e valores fornecidos no enunciado do problema.
        precos[i].valor = 1.5 + i;
    }

    for (i = 0; i < quant; i++)
    {
        scanf("%i %i", &pedido[i].codigo, &pedido[i].quantidade); // laço para receber os pedidos.
        for (j = 0; j < 5; j++)                                   // cada ciclo do laço é um novo produto e sua quantidade.
        {

            if (pedido[i].codigo == precos[j].codigo)
            {                                                           // laço para localizar o código do pedido no vetor com códigos e valores padrões.
                soma = soma + (precos[j].valor * pedido[i].quantidade); // variável soma acumula os valores dos pedidos vezes suas quantidades.
            }
        }
    }
    printf("%.2f\n", soma);
    return 0;
}
