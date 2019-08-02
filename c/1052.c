#include <stdio.h> //Bibliotecas utilizadas no programa
#include <stdlib.h>

int main()
{
    int m; //Variável para recebimento do número que representa o mês

    scanf("%i", &m); //Recebimento do número

    switch (m)
    { //Comparação do número recebido para exibir qual mês ele representa
    case 1:
        printf("January\n");
        break;

    case 2:
        printf("February\n");
        break;

    case 3:
        printf("March\n");
        break;

    case 4:
        printf("April\n");
        break;

    case 5:
        printf("May\n");
        break;

    case 6:
        printf("June\n");
        break;

    case 7:
        printf("July\n");
        break;

    case 8:
        printf("August\n");
        break;

    case 9:
        printf("September\n");
        break;

    case 10:
        printf("October\n");
        break;

    case 11:
        printf("November\n");
        break;

    case 12:
        printf("December\n");
    }

    return (0);
}