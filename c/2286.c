#include <stdio.h> //Bibliotecas utilizadas
#include <stdlib.h>

int main()
{
    int N, teste = 1, d1, d2, soma; //Variáveis para recebimento de dados e execução de cálculos
    char P[11], I[11];              //Vetores para guardar nomes

    do
    {
        scanf("%i", &N); //Recebe a quantia de partidas

        if (N != 0)
        {                  //Condição para recebimento dos outros dados e execução dos processos
            fflush(stdin); //Recebimento dos nomes
            scanf("%s", P);
            scanf("%s", I);
            printf("Teste %i\n", teste);

            for (int q = 0; q < N; q++)
            { //Recebimento das quantias de dedos por N partidas
                scanf("%i %i", &d1, &d2);
                soma = d1 + d2;

                if (soma % 2 == 0) //Confere se é par ou ímpar para printar quem venceu a partida
                    printf("%s\n", P);
                else
                    printf("%s\n", I);
            }
            printf("\n");
            teste = teste + 1; //Soma no contador de teste para caso haja um próximo loop
        }

    } while (N != 0); // Condição de parada

    return (0);
}