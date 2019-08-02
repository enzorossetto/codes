#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c; // Quantidade de testes.
    int n; // Quantidade de termos.
    int i; // Contador
    scanf("%i", &c);
    for (i = 0; i < c; i++)
    {
        scanf("%i", &n);
        if (n % 2 == 0)
        {                  // Se a quantidade de digitos for par
            printf("0\n"); // o resultado é zero, se não o resultado é 1,
        }
        else
        {
            printf("1\n");
        }
    }
    return 0;
}
