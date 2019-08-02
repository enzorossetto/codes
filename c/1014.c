#include <stdio.h>

int main()
{

    int X; //Variáveis que serão utilizadas.
    float Y;

    scanf("%i", &X); //Recebimento dos valores.
    scanf("%f", &Y);

    printf("%.3f km/l\n", X / Y); //Calcula o consumo por litro e printa.

    return 0;
}