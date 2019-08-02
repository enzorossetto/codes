#include <stdio.h>

int main()
{

    int num, horas;
    float valor;

    scanf("%i", &num);
    scanf("%i", &horas);
    scanf("%f", &valor);

    printf("NUMBER = %i\n", num);
    printf("SALARY = U$ %.2f\n", horas * valor);

    return 0;
}