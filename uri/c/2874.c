#include <stdio.h>
#include <string.h>
#include <math.h>

char toDecimal(char binary[])
{
    int size = strlen(binary) - 1, decimal = 0;

    for (int j = 0; j <= size; j++)
    {
        if (binary[j] == '1')
            decimal = decimal + pow(2, size - j);
    }

    return (decimal);
}

int main()
{
    int n, size; // n = number of binary entries

    while (scanf("%d", &n) != EOF)
    {
        char b[8]; // b = binary number

        for (int i = 0; i < n; i++)
        {
            scanf("%s", b);
            printf("%c", toDecimal(b));
        }

        printf("\n");
    }

    return (0);
}