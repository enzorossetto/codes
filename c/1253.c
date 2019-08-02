#include <stdio.h> //Bibliotecas utilizadas
#include <stdlib.h>

int main()
{
    int N, c;
    char s[51];

    scanf("%i ", &N);
    for (int i = 0; i < N; i++)
    {
        fflush(stdin);
        scanf("%s ", s);
        scanf("%i ", &c);

        for (int j = 0; s[j] != '\0'; j++)
        {
            if (s[j] - c < 'A')
                s[j] = s[j] - c + 'Z' - '@';
            else
                s[j] = s[j] - c;
        }
        printf("%s\n", s);
    }

    return (0);
}