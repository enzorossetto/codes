#include <stdio.h> //Bibliotecas utilizadas no programa
#include <stdlib.h>

int main()
{
    int N, D; //Variáveis para recebimento de alunos e jantares

    do
    {
        scanf("%i %i", &N, &D); //Recebimento das quantias

        if ((N != 0) || (D != 0))
        {                          //Condição para execução: as duas entradas não podem ser zero
            int v[D][N], cont = 0; //Cria um vetor com as quantias de jantares e alunos

            for (int i = 0; i < N; i++)
            { //Recebimento de quais jantares o aluno "i" esteve presente
                for (int j = 0; j < D - 1; j++)
                {
                    scanf("%i ", &v[j][i]);
                }
                scanf("%i", &v[D - 1][i]);
            }

            for (int i = 0; i < N; i++)
            { //Confere se o aluno "i" esteve presente em todos os janares
                int c = 0;
                for (int j = 0; j < D; j++)
                {
                    c = c + v[j][i];
                }

                if (c == D)
                    cont = cont + 1; //Caso tenha estado presente em todas, o contados de alunos presente aumenta 1
            }

            //Confere se houve algum aluno que esteve presente em todos os jantares e mostra se houve ou não
            if (cont > 0)
                printf("yes\n");
            else
                printf("no\n");
        }
    } while ((N != 0) || (D != 0)); //Condição de parada: as duas entradas devem ser zero

    return (0);
}
