#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    scanf("%i", &i); // números de a a serem impressos.
    char v[] = {"Feliz nat"};
    printf("%s", v);

    for (j = 1; j <= i; j++)
    {
        printf("a"); // frase dividida antes do ‘a’,
    }                // número de as
                     // restante da mensagem
    printf("l!\n");
    return 0;
}
