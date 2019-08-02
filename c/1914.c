#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int QT, n1, n2;
    char nome1[101], nome2[101], c1[6], c2[6];

    scanf("%i", &QT);
    for (int i = 0; i < QT; i++)
    {
        fflush(stdin);
        scanf("%s %s %s %s", nome1, c1, nome2, c2);
        scanf("%i %i", &n1, &n2);

        if ((n1 + n2) % 2 != 0)
        {
            if (strcmp(c1, "IMPAR") == 0)
                printf("%s\n", nome1);
            else
                printf("%s\n", nome2);
        }
        else
        {
            if (strcmp(c1, "PAR") == 0)
                printf("%s\n", nome1);
            else
                printf("%s\n", nome2);
        }
    }

    return (0);
}