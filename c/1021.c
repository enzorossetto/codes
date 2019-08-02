#include <stdio.h> //Bibliotecas utilizadas.
#include <stdlib.h>
#include <math.h>

int main()
{
    double N; //Criação das variáveis
    int notas, moedas;

    scanf("%lf", &N); //Recebimento do valor

    //Separação entre reais e centavos
    notas = N;
    moedas = round((N - notas) * 100);

    //Separação de quantas notas de cada tipo serão utilizadas a partir dos restos
    printf("NOTAS:\n");
    printf("%i nota(s) de R$ 100.00\n", notas / 100);
    printf("%i nota(s) de R$ 50.00\n", (notas % 100) / 50);
    printf("%i nota(s) de R$ 20.00\n", ((notas % 100) % 50) / 20);
    printf("%i nota(s) de R$ 10.00\n", ((((notas % 100) % 50) % 20) / 10));
    printf("%i nota(s) de R$ 5.00\n", (((((notas % 100) % 50) % 20) % 10) / 5));
    printf("%i nota(s) de R$ 2.00\n", ((((((notas % 100) % 50) % 20) % 10) % 5) / 2));

    //Separação de quantas moedas de cada tipo serão utilizadas a partir dos restos
    printf("MOEDAS:\n");
    printf("%i moeda(s) de R$ 1.00\n", (((((((notas % 100) % 50) % 20) % 10) % 5) % 2) / 1));
    printf("%i moeda(s) de R$ 0.50\n", moedas / 50);
    printf("%i moeda(s) de R$ 0.25\n", (moedas % 50) / 25);
    printf("%i moeda(s) de R$ 0.10\n", ((moedas % 50) % 25) / 10);
    printf("%i moeda(s) de R$ 0.05\n", ((((moedas % 50) % 25) % 10) / 5));
    printf("%i moeda(s) de R$ 0.01\n", ((((moedas % 50) % 25) % 10) % 5));

    return (0);
}