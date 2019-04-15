#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, //how many numbers there are in the sequence
        m; //the sequence digit to be tested

    while(scanf("%d", &n) != EOF){

        int *numbers;
        numbers = malloc((n + 1) * sizeof(int));

        for (int i = 0; i < n; i++)
        {
            scanf("%d ", &numbers[i]);
        }

        numbers[n] = -1;

        scanf("%d", &m);

        int order = 2, mOrder = 3;

        while ((mOrder != -1) && (order <= mOrder))
        {
            int position = order - 1;

            for (int i = 0; numbers[i] != -1; i++)
            {
                if ((i + 1) % order != 0)
                {
                    if ((i + 1) > order)
                    {
                        numbers[position] = numbers[i];
                        position++;
                    }
                    if (numbers[i] == m)
                    {
                        mOrder = i + 1;

                        if (mOrder < order)
                        {
                            printf("Y\n");
                            break;
                        }
                    }
                }
                else if ((numbers[i] == m) && ((i + 1) % order == 0))
                {
                    mOrder = -1;
                    break;
                }
            }

            numbers[position] = -1;
            order++;

            if (mOrder == -1)
            {
                printf("N\n");
            }
        }

        free(numbers);
    }
    return (0);
}
