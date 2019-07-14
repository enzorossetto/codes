#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d", &n) != EOF)
    {
        float sumVotes = 0, vote;

        for (int i = 0; i < n; i++)
        {
            scanf("%f", &vote);
            sumVotes += vote;
        }

        if ((sumVotes / n) >= (2.0 / 3.0))
        {
            printf("impeachment\n");
        }
        else
        {
            printf("acusacao arquivada\n");
        }
    }

    return (0);
}