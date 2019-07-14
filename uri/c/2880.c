#include <stdio.h>
#include <string.h>

int main()
{
    char message[10001], crib[10001];
    int positions = 0;

    scanf("%s", message);
    scanf("%s", crib);

    int checks = strlen(message) - strlen(crib);

    for (int i = 0; i <= checks; i++)
    {
        int pass = 1;

        for (int j = i; j < strlen(crib) + i; j++)
        {
            if (message[j] == crib[j - i])
            {
                pass = 0;
            }
        }

        if (pass == 1)
        {
            positions++;
        }
    }

    printf("%d\n", positions);

    return 0;
}