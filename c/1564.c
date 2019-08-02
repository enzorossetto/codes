#include <stdio.h>

int main()
{
    int i; // número de reclamações.
    while ((scanf("%i", &i)) != EOF)
    { // scanf do número de reclamações.
        if (i == 0)
        {
            printf("vai ter copa!\n");
        }
        else
        {
            printf("vai ter duas!\n");
        }
    }
    return 0;
}
