#include <stdio.h> //Bibliotecas utilizadas no programa
#include <stdlib.h>

int main()
{
    int exp, q, C = 0, R = 0, S = 0, total = 0; //Variáveis para recebimento do valor e armazenagem de somatórios
    char n;                                     //Variável para recebimento do tipo de animal

    //Recebimento da quantia de experimentos
    fflush(stdin);
    scanf("%i", &exp);

    //Recebimento da quantia e qual animal foi utilizado em cada experimento
    for (int i = 0; i < exp; i++)
    {
        fflush(stdin);
        scanf("%i %c", &q, &n);

        total = total + q; //Armazenamento do total de animais utilizados
        //Armazenamento da quantia do animal utilizado
        if (n == 'C')
            C = C + q;
        else if (n == 'R')
            R = R + q;
        else
            S = S + q;
    }

    //Exibição das saídas exigidas
    printf("Total: %i cobaias\n", total);
    printf("Total de coelhos: %i\n", C);
    printf("Total de ratos: %i\n", R);
    printf("Total de sapos: %i\n", S);
    printf("Percentual de coelhos: %.2f %\n", ((float)C / total) * 100);
    printf("Percentual de ratos: %.2f %\n", ((float)R / total) * 100);
    printf("Percentual de sapos: %.2f %\n", ((float)S / total) * 100);

    return (0);
}
