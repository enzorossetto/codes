#include <stdio.h>

int main()
{
    char n;
    int numbers[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, high = 0;

    while (scanf("%c", &n) != EOF)
    {

        if (n != '\n')
        {
            numbers[n - '0'] = numbers[n - '0'] + 1;
        }
        else
        {
            for (int i = 0; i < 10; i++)
            {
                if (numbers[i] > numbers[high])
                {
                    high = i;
                }
                else if (numbers[high] == numbers[i])
                {
                    if (i > high)
                    {
                        high = i;
                    }
                }
            }

            printf("%d\n", high);

            for (int i = 0; i < 10; i++)
            {
                numbers[i] = 0;
            }
            high = 0;
        }
    }

    return 0;
}