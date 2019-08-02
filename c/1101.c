#include <stdio.h> //Bibliotecas utilizadas no programa
#include <stdlib.h>

int main()
{
    int M, N, soma; //Variáveis utilizadas para armazenar as entradas e a soma dos itens

    do
    {
        soma = 0;               //Reinicia a soma a cada loop
        scanf("%i %i", &M, &N); //Recebe os valores de entrada

        if ((M > 0) && (N > 0))
        { //Identifica a condição de validez para executar a soma
            //Seleção de onde começar e parar
            if (M < N)
            {
                for (int i = M; i <= N; i++)
                { //Contador para somar os itens de M a N, mostrando os itens um a um
                    soma = soma + i;
                    printf("%i ", i);
                }
            }
            else
            {
                for (int i = N; i <= M; i++)
                { //Contador para somar os itens de M a N, mostrando os itens um a um
                    soma = soma + i;
                    printf("%i ", i);
                }
            }
            printf("Sum=%i\n", soma); //Mostra a soma no formato desejado
        }

    } while ((M > 0) && (N > 0)); //Condição para que o processo continue

    return (0);
}
