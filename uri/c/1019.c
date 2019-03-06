#include <stdio.h>

int main()
{

    int N, h, m, s;

    scanf("%i", &N);

    h = N / 3600;
    m = (N % 3600) / 60;
    s = (N % 3600) % 60;

    printf("%i:%i:%i\n", h, m, s);

    return 0;
}