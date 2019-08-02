#include <stdio.h> // Bibliotecas utilizadas
#include <stdlib.h>

int main()
{
    int T = 1;
    float A, B, C; //Variáveis utilizadas
    fflush(stdin);
    scanf("%f %f %f", &A, &B, &C); //Recebimento dos valores

    //Comparações dos lados para identificar se forma um triangulo e caso forme, qual o tipo
    if ((A >= B + C) || (B >= A + C) || (C >= A + B))
    {
        printf("NAO FORMA TRIANGULO\n");
        T = 0;
    }
    else if (((A * A) == (B * B) + (C * C)) || ((B * B) == (A * A) + (C * C)) || ((C * C) == (B * B) + (A * A)))
        printf("TRIANGULO RETANGULO\n");
    else if (((A * A) > (B * B) + (C * C)) || ((B * B) > (A * A) + (C * C)) || ((C * C) > (B * B) + (A * A)))
        printf("TRIANGULO OBTUSANGULO\n");
    else if (((A * A) < (B * B) + (C * C)) || ((B * B) < (A * A) + (C * C)) || ((C * C) < (B * B) + (A * A)))
        printf("TRIANGULO ACUTANGULO\n");

    if ((A == B) && (A == C) && (T == 1))
        printf("TRIANGULO EQUILATERO\n");
    else if (((A == B) && (A != C) && (T == 1)) || ((A == C) && (A != B) && (T == 1)) || ((B == C) && (B != A) && (T == 1)))
        printf("TRIANGULO ISOSCELES\n");
    return (0);
}