#include <stdio.h>

int main()
{
    int cases, people;

    scanf("%d", &cases);

    while (cases != 0)
    {
        for (int i = 0; i < cases; i++)
        {
            scanf("%d", &people);

            if ((people - 1) % 2 == 0)
            {
                printf("%d\n", people * 2 - 1);
            }
            else
            {
                printf("%d\n", people * 2 - 2);
            }
        }

        scanf("%d", &cases);
    }

    return 0;
}