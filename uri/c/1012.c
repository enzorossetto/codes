#include <stdio.h>

int main()
{

    float A, B, C;

    scanf("%f %f %f", &A, &B, &C); //Recebe os três valores para realizar os cálculos.

    printf("TRIANGULO: %.3f\n", (A * C) / 2.0);    //Faz o calculo da area do triangulo e printa.
    printf("CIRCULO: %.3f\n", C * C * 3.14159);    //Faz o calculo da area do circulo e printa.
    printf("TRAPEZIO: %.3f\n", (A + B) * C / 2.0); //Faz o calculo da area do trapezio e printa.
    printf("QUADRADO: %.3f\n", B * B);             // Faz o calculo da area do quadrado e printa.
    printf("RETANGULO: %.3f\n", A * B);            //Faz o calculo da area do retangulo e printa.

    return 0;
}