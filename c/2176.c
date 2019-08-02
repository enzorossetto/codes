#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char menssagem[101];
    int i, n, cont;
    fflush(stdin);
    gets(menssagem);       // recebe amenssagem
    n = strlen(menssagem); // conta quantos caracteres ela possui
    for (i = 0; i < n; i++)
    {
        printf("%c", menssagem[i]); // imprime a menssagem
        if (menssagem[i] == '1')
        { // conta quantos 1's ela possui.
            cont++;
        }
    }
    if (cont % 2 == 0)
    { // caso seja par imprime 0
        printf("0\n");
    }
    else
    {
        printf("1\n"); // caso seja impar imrimi 1
    }
    return 0;
}
