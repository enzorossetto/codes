#include <stdio.h> //Bibliotecas utilizadas
#include <stdlib.h>

int main()
{
    char s[1001]; //Variáveis utilizadas para recebimento de dados
    int c[26], n, f;

    scanf("%i ", &f); //Recebimento de quantas frases serão digitadas
    for (int i = 0; i < f; i++)
    { //Por "f" vezes realiza os processos
        for (int j = 0; j < 26; j++)
        { //Inicia o contaodr de caracteres presentes
            c[j] = 0;
        }

        fflush(stdin);
        gets(s); //Recebe a frase
        for (int j = 0; s[j] != '\0'; j++)
        {                                       //Confere quais caracteres estão presentes na frase
            if ((s[j] >= 'a') && (s[j] <= 'z')) //'a' representa a posição [0] e 'z' a posição [25]
                c[s[j] - 'a'] = 1;
        }

        n = 0; //Inicia o contador de caracteres diferentes
        for (int j = 0; j < 26; j++)
        {
            if (c[j] == 1) //Caso haja um caracter na frase, será adicionado 1 ao contador
                n = n + 1;
        }

        if (n == 26)                    //De acordo com quantos caracteres diferentes existem na frase,
            printf("frase completa\n"); //printa o tipo da frase
        else if ((n >= 13) && (n < 26))
            printf("frase quase completa\n");
        else
            printf("frase mal elaborada\n");
    }
    return (0);
}