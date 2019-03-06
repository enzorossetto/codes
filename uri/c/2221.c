#include <stdio.h>
#include <stdlib.h>

struct jogador
{
    int Ai;      // Valor de ataque.
    int Di;      // Valor de defesa.
    int Li;      // Nível do jogador.
    float golpe; // Valor a ser calculado do golpe.
};

struct jogador receber(struct jogador A); // função que recebe os valores de ataque,
                                          // defesa e nível dos jogadores.
float golpe(struct jogador A, int bonus); // função que cálcula o golpe dos jogadores.

int main()
{
    int i, T, bonus; // T = número de vezes que o programa irá ser executado.
    scanf("%i", &T);
    struct jogador Dabriel;
    struct jogador Guarte;
    for (i = 0; i < T; i++)
    {
        scanf("%i", &bonus);        // recebe o bonus a ser dado a jogadores de nível par
        Dabriel = receber(Dabriel); // recebe os valores
        Guarte = receber(Guarte);
        Dabriel.golpe = golpe(Dabriel, bonus); // Calcula o valor do golpe.
        Guarte.golpe = golpe(Guarte, bonus);
        if (Dabriel.golpe > Guarte.golpe)
        { // O jogador com maior valor de golpe ganha a partida
            printf("Dabriel\n");
        }
        else if (Guarte.golpe > Dabriel.golpe)
        {
            printf("Guarte\n");
        }
        else
        {
            printf("Empate\n");
        }
    }
    return 0;
}

struct jogador receber(struct jogador A)
{
    scanf("%i", &A.Ai);
    scanf("%i", &A.Di);
    scanf("%i", &A.Li);
    return A;
}

float golpe(struct jogador A, int bonus)
{
    int g;                 // g = valor do golpe.
    g = (A.Ai + A.Di) / 2; // Golpe = média de ataque e defesa + bonus (se o nível do jogador for par).
    if (A.Li % 2 == 0)
    {
        g = g + bonus;
    }
    return g;
}