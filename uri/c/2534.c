#include <stdio.h>
#include <stdlib.h>

int intCmp(const void *a, const void *b)
{
    int *x = (int *)a;
    int *y = (int *)b;
    return *y - *x;
} //Comparison to return the array in crescent order

int main()
{
    int citizens, queries;

    while (scanf("%d %d", &citizens, &queries) != EOF)
    {
        int query;
        int grades[citizens];

        for (int i = 0; i < citizens; i++)
        {
            scanf("%d", &grades[i]);
        }

        qsort(grades, citizens, sizeof(int), intCmp);

        for (int i = 0; i < queries; i++)
        {
            scanf("%d", &query);
            printf("%d\n", grades[query - 1]);
        }
    }

    return (0);
}