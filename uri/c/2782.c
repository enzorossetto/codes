#include <stdio.h>

void main()
{
    int entries;

    while (scanf("%d", &entries) != EOF)
    {
        int values[entries], step, differentSteps = 1;

        for (int i = 0; i < entries; i++)
        {
            scanf("%d", &values[i]);
        }

        if ((entries == 1) || (entries == 2))
        {
            printf("1\n");
        }
        else
        {
            step = values[0] - values[1];

            for (int i = 2; i < entries; i++)
            {
                if (values[i - 1] - values[i] != step)
                {
                    differentSteps = differentSteps + 1;
                    step = values[i - 1] - values[i];
                }
            }

            printf("%d\n", differentSteps);
        }
    }
}