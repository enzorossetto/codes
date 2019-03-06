#include <stdio.h> // Bibliotecas utilizadas
#include <stdlib.h>

int main()
{
    float x, y; //Variáveis utilizadas
    fflush(stdin);
    scanf("%f %f", &x, &y); //Recebimento dos valores

    //Verifica os valores para mostrar qual quadrante, eixo ou origem
    if (x == 0)
    {
        if (y == 0)
            printf("Origem\n");
        else if ((y > 0) || (y < 0))
            printf("Eixo Y\n");
    }
    else if (x > 0)
    {
        if (y == 0)
            printf("Eixo X\n");
        else if (y > 0)
            printf("Q1\n");
        else
            printf("Q4\n");
    }
    else
    {
        if (y == 0)
            printf("Eixo X\n");
        else if (y > 0)
            printf("Q2\n");
        else
            printf("Q3\n");
    }

    return (0);
}