#include <stdio.h>

float area(int amount, float baseA, float baseB)
{
    return amount * (5 * (baseA + baseB) / 2);
}

int main()
{
    int entries, amount;
    float baseA, baseB;

    do
    {
        scanf("%d", &entries);

        if (entries != 0)
        {
            for (int i = 1; i <= entries; i++)
            {
                scanf("%d %f %f", &amount, &baseA, &baseB);
                printf("Size #%d:\n", i);
                printf("Ice Cream Used: %.2f cm2\n", area(amount, baseA, baseB));
            }
            printf("\n");
        }

    } while (entries != 0);
}