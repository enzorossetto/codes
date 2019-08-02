#include <stdio.h> //Bibliotecas utilizadas
#include <stdlib.h>

int main()
{
    int A, D, atk[11], def[11], menatk, men1def, men2def; //Variáveis para recebimento de dados

    do
    {
        scanf("%i %i", &A, &D); //Rcebimento das quantias de atacantes e defensores

        if ((A != 0) && (D != 0))
        { //Condição para executar os recebimentos e comparações
            //Recebimento e armazenamento do primeiro atacante para permitir comparação dentro do for
            scanf("%i", &atk[0]);
            menatk = atk[0];

            //Recebimento dos próximos atacantes e comparação com o que está mais a frente para armazenar qual dos dois está mais a frente
            for (int i = 1; i < A; i++)
            {
                scanf("%i", &atk[i]);

                if (atk[i] < menatk)
                    menatk = atk[i];
            }

            //Recebimento dos dois primeiros defensores
            scanf("%i", &def[0]);
            scanf("%i", &def[1]);

            //Armazenar de forma que men1def contenha o que está mais a frente entre os dois recebidos
            if (def[0] < def[1])
            {
                men1def = def[0];
                men2def = def[1];
            }
            else
            {
                men1def = def[1];
                men2def = def[0];
            }

            //Recebimento dos próximos defensores e comparação com os dois menores para ver se eles estão mais a frente de um ou dos dois defensores que eram menores
            for (int i = 2; i < D; i++)
            {
                scanf("%i", &def[i]);

                if (def[i] < men1def)
                {
                    men2def = men1def;
                    men1def = def[i];
                }
                else if (def[i] < men2def)
                    men2def = def[i];
            }

            //Verifica as condições para o atacante estar ou não impedido e mostra se está ou não
            if (menatk >= men2def)
                printf("N\n");
            else if ((menatk >= men1def) && (menatk >= men2def))
                printf("N\n");
            else
                printf("Y\n");
        }
    } while ((A != 0) && (D != 0)); //Condição de parada do loop

    return (0);
}