#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lines;
    scanf("%d", &lines);

    for (int i = 0; i < lines * 4; i += 4) //Numbers grow by 4 each line
    {
        printf("%d %d %d PUM\n", i + 1, i + 2, i + 3);
    }

    return 0;
}