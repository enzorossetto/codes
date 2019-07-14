#include <stdio.h>

int main()
{
    int bird, food, nPlants, transporting, plantWeight, stops = 0;
    scanf("%d %d %d", &bird, &food, &nPlants);

    transporting = bird + food;

    scanf("%d", &plantWeight);
    if (bird <= plantWeight)
    {
        if (transporting > plantWeight)
        {
            transporting = plantWeight;
        }

        for (int i = 1; i < nPlants; i++)
        {
            scanf("%d", &plantWeight);

            if (bird > plantWeight)
            {
                break;
            }
            else if (transporting > plantWeight)
            {
                transporting = plantWeight;
                stops = stops + 1;
            }
        }
    }

    printf("%d\n", stops);
}