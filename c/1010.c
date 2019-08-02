#include <stdio.h>

int main()
{

    int C1, C2, Q1, Q2;
    float V1, V2;

    scanf("%i   %i  %f", &C1, &Q1, &V1);

    scanf("%i   %i  %f", &C2, &Q2, &V2);

    printf("VALOR A PAGAR: R$ %.2f\n", ((Q1 * V1) + (Q2 * V2)));

    return 0;
}