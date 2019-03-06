#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p[100];
    int i, t;
    int menor[2]; // guardar a posoição e o valor do menor valor gerado.
    scanf("%i", &t);
    menor[1] = 21; // t é sempre menor que vinte.
    for (i = 0; i < t; i++)
    {
        scanf("%i", &p[i]);
        if (p[i] < menor[1])
        {
            menor[1] = p[i]; // menor valor
            menor[0] = i;    // posição do menor valor
        }
    }
    printf("%i\n", menor[0] + 1);
    return 0;
}
