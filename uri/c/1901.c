#include <stdio.h>

int main()
{
    int n, row, column, butterfly = 0, species[1001];
    scanf("%d", &n);

    for (int i = 0; i <= 1000; i++)
    {
        species[i] = 0;
    }

    int forest[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &forest[i][j]);
        }
    }

    for (int i = 0; i < 2 * n; i++)
    {
        scanf("%d %d", &row, &column);

        species[forest[row - 1][column - 1]] = 1;
    }

    for (int i = 0; i <= 1000; i++)
    {
        if (species[i] == 1)
        {
            butterfly = butterfly + 1;
        }
    }

    printf("%d\n", butterfly);
}