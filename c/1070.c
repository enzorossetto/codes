#include <stdio.h> //Bibliotecas utilizadas no programa
#include <stdlib.h>

int main()
{
    int x; //Variável para recebimento do valor

    //Recebimento do número
    fflush(stdin);
    scanf("%i", &x);

    //Verificação se o número é par ou ímpar e exibe o número ou o próximo número ímpar
    if (x % 2 != 0)
    {
        printf("%i\n", x);
    }
    else
    {
        x = x + 1;
        printf("%i\n", x);
    }

    //Exibe os próximos 5 números ímpares
    printf("%i\n%i\n%i\n%i\n%i\n", x + 2, x + 4, x + 6, x + 8, x + 10);

    return (0);
}
