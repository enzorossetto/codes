#include <stdio.h>
#include <math.h>

int fibonacci(int n)
{
    return (1 / sqrt(5)) * (pow((1 + sqrt(5)) / 2, n) - (pow((1 - sqrt(5)) / 2, n)));
}

int main()
{
    int first, second, n, result, i = 5, j = 0;

    scanf("%d", &n);
    while (1)
    {
        if (fibonacci(i) - fibonacci(i - 1) != 1)
        {
            result = fibonacci(i - 1) + 1;
            j = j + 1;

            while ((result < fibonacci(i)) && (j < n))
            {
                result = result + 1;
                if (result < fibonacci(i))
                {
                    j = j + 1;
                }
            }
        }

        if (j == n)
        {
            printf("%d\n", result);
            break;
        }

        i++;
    }

    return 0;
}
