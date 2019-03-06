#include <stdio.h> //Bibliotecas utilizadas no programa
#include <stdlib.h>
#include <string.h>

int main()
{
    char c1[20], c2[20], c3[20]; //Strings para entrada de dados

    fflush(stdin); //Limpeza do buffer de teclado
    gets(c1);      //Recebimento dos dados
    gets(c2);
    gets(c3);

    //comparação das strings recebidas com as palavras possíveis para printar a resposta
    if (strcmp(c1, "vertebrado") == 0)
    {
        if (strcmp(c2, "ave") == 0)
        {
            if (strcmp(c3, "carnivoro") == 0)
                printf("aguia\n");
            else
                printf("pomba\n");
        }
        else
        {
            if (strcmp(c3, "onivoro") == 0)
                printf("homem\n");
            else
                printf("vaca\n");
        }
    }
    else
    {
        if (strcmp(c2, "inseto") == 0)
        {
            if (strcmp(c3, "hematofago") == 0)
                printf("pulga\n");
            else
                printf("lagarta\n");
        }
        else
        {
            if (strcmp(c3, "hematofago") == 0)
                printf("sanguessuga\n");
            else
                printf("minhoca\n");
        }
    }

    return (0);
}
