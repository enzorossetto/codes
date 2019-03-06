#include <stdio.h> //Bibliotecas utilizadas no programa
#include <stdlib.h>

int main()
{
    float s, t1, t2, t3;

    fflush(stdin);
    scanf("%f", &s);

    if (s <= 2000)
        printf("Isento\n");
    else if ((s > 2000) && (s <= 3000))
    {
        printf("R$ %.2f\n", 0.08 * (s - 2000));
    }
    else if ((s > 3000) && (s <= 4500))
    {
        t2 = s - 3000;
        t1 = s - 2000 - t2;
        printf("R$ %.2f\n", (t1 * 0.08) + (t2 * 0.18));
    }
    else
    {
        t3 = s - 4500;
        t2 = s - 3000 - t3;
        t1 = s - 2000 - t2 - t3;
        printf("R$ %.2f\n", (t1 * 0.08) + (t2 * 0.18) + (t3 * 0.28));
    }

    return (0);
}
