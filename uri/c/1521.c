#include <stdio.h>

int main()
{
    int students, current;
    scanf("%d", &students);

    while (students != 0)
    {
        int numbers[students];

        for (int i = 1; i <= students; i++)
        {
            scanf("%d", &numbers[i]);
        }

        scanf("%d", &current);

        while (numbers[current] != current)
        {
            current = numbers[current];
        }

        printf("%d\n", current);
        scanf("%d", &students);
    }

    return 0;
}