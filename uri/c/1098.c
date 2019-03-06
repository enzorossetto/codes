#include <stdio.h>

void main()
{
    for (int i = 0; i <= 20; i += 2)
    {
        for (int j = 1; j <= 3; j++)
        {
            if ((i == 0) || (i == 10) || (i == 20))
            {
                printf("I=%i J=%i\n", (int)(i * 0.1), (int)((i * 0.1) + j));
            }
            else
            {
                printf("I=%.1f J=%.1f\n", i * 0.1, (i * 0.1) + j);
            }
        }
    }
}