#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cases;
    char s1[10001], s2[10001];

    scanf("%i", &cases);
    fflush(stdin);
    for (int i = 0; i < cases; i++)
    {
        int op = 0, j = 0;

        scanf("%s %s", s1, s2);
        while (s1[j] != '\0')
        {
            if (s1[j] < s2[j])
                op = op + (s2[j] - s1[j]);
            else if (s1[j] != s2[j])
                op = op + (26 - s1[j] + s2[j]);
            else
                op = op;
            j++;
        }

        printf("%i\n", op);
    }

    return (0);
}