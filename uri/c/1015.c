#include <stdio.h> //Bibliotecas utilizadas.
#include <stdlib.h>
#include <math.h>

int main()
{
    double x1, x2, y1, y2; //Variaveis que serão utilizadas

    scanf("%lf %lf", &x1, &y1); //Recebe os valores.
    scanf("%lf %lf", &x2, &y2);

    printf("%.4lf\n", sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2))); //Calcula a distancia e printa.

    return (0);
}
