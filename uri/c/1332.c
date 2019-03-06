#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, c, certo; //Variáveis para recebimento e armazenamento de dados
    char num[6];     //String para receber os números

    scanf("%i", &n); //Recebe quantos números serão escritos
    for (int i = 0; i < n; i++)
    { //Por n vezes recebe os números
        certo = 0;
        fflush(stdin);
        scanf("%s", &num);
        c = strlen(num); //Conta o tamanho do número escrito
        if (c == 5)      //Divisão entre sendo 3 ou não 3
            printf("3\n");
        else
        { //Confere se o escrito esté próximo de "one" ou não
            if (num[0] == 'o')
                certo = certo + 1;
            if (num[1] == 'n')
                certo = certo + 1;
            if (num[2] == 'e')
                certo = certo + 1;

            if (certo >= 2) //Imprime qual o número que foi escrito
                printf("1\n");
            else
                printf("2\n");
        }
    }

    return (0);
}