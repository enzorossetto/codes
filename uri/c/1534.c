#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (((n % 2 != 0) && (i == j) && (2 * j - 1 == n)) || (n - j + 1 == i))
                {
                    printf("2");
                }
                else if (i == j)
                {
                    printf("1");
                }
                else
                {
                    printf("3");
                }
            }
            printf("\n");
        }
    }

    return 0;
}