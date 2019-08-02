#include <stdio.h> //Bibliotecas utilizadas
#include <stdlib.h>
#include <string.h>

int main()
{
    char L[100][21]; //Matriz para receber os idiomas falados por cada pessoa
    int k, n;        //Variáveis para recebimento de quantias

    scanf("%i", &n); //Recebe quantos casos
    for (int i = 0; i < n; i++)
    {                          //Executa o precesso por "n" casos
        int dif = 0, cont = 0; //Variáveis de controle
        scanf("%i", &k);       //Recebe quantas pessoas estão no grupo
        fflush(stdin);

        for (int j = 0; j < k; j++)
        { //Recebimento dos idiomas
            scanf("%s ", L[j]);
        }
        //Comparação entre os idiomas para saber se há algum diferente
        while ((cont < k) && (dif == 0))
        {
            dif = strcmp(L[0], L[cont]);
            cont = cont + 1;
        }
        //Mostra qual idioma deve ser falado no grupo
        if (dif != 0)
            printf("ingles\n");
        else
            printf("%s\n", L[0]);
    }
    return (0);
}