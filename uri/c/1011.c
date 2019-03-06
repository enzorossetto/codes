#include <stdio.h>

int main()
{

    float R;

    scanf("%f", &R); //Recebe o raio.

    printf("VOLUME = %.3f\n", ((4 / 3.0) * 3.14159 * R * R * R)); //Realiza os calculos para printar o volume.

    return 0;
}