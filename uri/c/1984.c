#include <stdio.h>
#include <stdlib.h>

int main()
{
    char vet[11]; // receber os números como char
    int i;
    fflush(stdin);
    gets(vet);
    for (i = 10; i >= 0; i--)
    { // analisar o vetor do fim ao início
        if ((vet[i] <= '9') && (vet[i] >= '0'))
        { // imprimir se for um caractere numérico
            printf("%c", vet[i]);
        }
    }
    printf("\n");
    return 0;
}
