#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, i, cont = 0;
    int competidores[5]; // 5 competidores
    scanf("%i", &t);     // scanf do tipo correto de chá
    for (i = 0; i < 5; i++)
    {
        scanf("%i", &competidores[i]); // scanf da escolha de cada competidor
        if (competidores[i] == t)
        { // soma 1 se a escolha estiver correta
            cont++;
        }
    }
    printf("%i\n", cont);
    return 0;
}
