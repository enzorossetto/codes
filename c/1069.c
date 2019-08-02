#include <stdio.h>

int main()
{
    int entries;
    char scan;

    scanf("%d\n", &entries);

    for (int i = 0; i < entries; i++)
    {
        int diamonds = 0, totalDiamonds = 0;

        do
        {
            scanf("%c", &scan);

            if (scan == '<')
            {
                diamonds++;
            }
            else if ((scan == '>') && (diamonds != 0))
            {
                diamonds--;
                totalDiamonds = totalDiamonds + 1;
            }
        } while (scan != '\n');

        printf("%d\n", totalDiamonds);
    }

    return 0;
}