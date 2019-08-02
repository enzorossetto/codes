#include <stdio.h>
#include <stdlib.h>

void main()
{
    int N; //Variável de controle para quantia de entradas

    while (scanf("%i", &N) != EOF)
    {
        int Hi[N], P = 1, f = 1; //Cria o vetor para armazenar os dados e a saída referente à paiságem

        for (int i = 0; i < N; i++)
        { //Pega todas as medidas
            scanf("%i", &Hi[i]);
        }

        if (N == 1)
        {
            P = 1;
        }

        else if (((N == 2) && (Hi[0] == Hi[1])) || (Hi[0] == Hi[1]))
        {
            P = 0;
        }

        else if (Hi[0] > Hi[1])
        {
            while ((f < N - 2) && (P == 1))
            {
                if ((f % 2 != 0) && ((Hi[f] >= Hi[f - 1]) || (Hi[f] >= Hi[f + 1])))
                    P = 0;
                else if ((f % 2 == 0) && ((Hi[f] <= Hi[f - 1]) || (Hi[f] <= Hi[f + 1])))
                    P = 0;

                f = f + 1;
            }

            if ((N % 2 == 0) && (Hi[N - 1] >= Hi[N - 2]))
                P = 0;
            else if ((N % 2 != 0) && (Hi[N - 1] <= Hi[N - 2]))
                P = 0;
        }

        else if (Hi[0] < Hi[1])
        {
            while ((f < N - 2) && (P == 1))
            {
                if ((f % 2 != 0) && ((Hi[f] <= Hi[f - 1]) || (Hi[f] <= Hi[f + 1])))
                    P = 0;
                else if ((f % 2 == 0) && ((Hi[f] >= Hi[f - 1]) || (Hi[f] >= Hi[f + 1])))
                    P = 0;

                f = f + 1;
            }

            if ((N % 2 == 0) && (Hi[N - 1] <= Hi[N - 2]))
                P = 0;
            else if ((N % 2 != 0) && (Hi[N - 1] >= Hi[N - 2]))
                P = 0;
        }

        printf("%i\n", P);
    }
}