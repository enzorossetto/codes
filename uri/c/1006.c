#include <stdio.h>

int main()
{

    float A, B, C;

    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    printf("MEDIA = %.1f\n", ((A * 2) + (B * 3) + (C * 5)) / 10.0);

    return 0;
}