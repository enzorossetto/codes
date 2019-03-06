#include <stdio.h>

void main()
{
    int testCases;
    float n1, n2, n3;

    scanf("%d", &testCases);

    for (int i = 1; i <= testCases; i++)
    {
        scanf("%f %f %f", &n1, &n2, &n3);
        printf("%.1f\n", (2 * n1 + 3 * n2 + 5 * n3) / 10);
    }
}
