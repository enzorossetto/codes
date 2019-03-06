#include <stdio.h>

int main()
{

    float salario, vendas;
    char nome[300];

    scanf("%s", nome);
    scanf("%f", &salario);
    scanf("%f", &vendas);

    printf("TOTAL = R$ %.2f\n", (salario + (0.15 * vendas)));

    return 0;
}