#include <stdio.h>

int main()
{
    int h, m, atr;
    fflush(stdin);

    while (scanf("%d:%d", &h, &m) != EOF)
    {

        atr = (60 * h) + m + 60 - (8 * 60);

        if (atr <= 0)
            printf("Atraso maximo: 0\n");

        else
            printf("Atraso maximo: %d\n", atr);
    }

    return 0;
}