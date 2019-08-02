#include <stdio.h>
#include <stdlib.h>

void main()
{
    long long int h, i;

    while ((scanf("%lld %lld", &h, &i)) != EOF)
    {
        if (h >= i)
            printf("%lld\n", h - i);
        else
            printf("%lld\n", i - h);
    }
}