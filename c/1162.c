#include <stdio.h>

void swap(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
    int tests, size;
    scanf("%d", &tests);

    for (int i = 0; i < tests; i++)
    {
        scanf("%d", &size);
        int train[size], swaps = 0;

        for (int j = 0; j < size; j++)
        {
            scanf("%d", &train[j]);
        }

        for (int j = 0; j < size - 1; j++)
        {
            for (int k = 0; k < size - 1; k++)
            {
                if (train[k] > train[k + 1])
                {
                    swap(&train[k], &train[k + 1]);
                    swaps = swaps + 1;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", swaps);
    }

    return 0;
}