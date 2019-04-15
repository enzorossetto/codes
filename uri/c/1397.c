#include <stdio.h>

int main()
{
    int n;

    do
    {
        scanf("%d", &n);

        if (n != 0)
        {
            int a, b, pointsA = 0, pointsB = 0;

            for (int i = 0; i < n; i++)
            {
                scanf("%d %d", &a, &b);

                if (a > b)
                {
                    pointsA = pointsA + 1;
                }
                else if (b > a)
                {
                    pointsB = pointsB + 1;
                }
            }

            printf("%d %d\n", pointsA, pointsB);
        }

    } while (n != 0);

    return (0);
}