#include <stdio.h>

int main()
{
    int cases, students, number;

    scanf("%d", &cases);

    for (int i = 0; i < cases; i++)
    {
        scanf("%d %d", &students, &number);

        int answer, correctStudent = 0, closerStudent = 0, proximity = 1000;

        for (int j = 1; j <= students; j++)
        {
            scanf("%d", &answer);

            if ((answer == number) && (correctStudent == 0))
            {
                correctStudent = j;
            }
            else if (correctStudent == 0)
            {
                int difference;
                difference = number - answer > 0 ? number - answer : (number - answer) * (-1);

                if (difference < proximity)
                {
                    proximity = difference;
                    closerStudent = j;
                }
            }
        }
        printf("%d\n", correctStudent ? correctStudent : closerStudent);
    }
}