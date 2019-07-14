#include <stdio.h>

int main()
{
    char c;
    int questions;
    scanf("%d\n", &questions);

    char desafortunato[questions + 1];
    scanf("%s", desafortunato);

    int questionsAnswer[questions][26], highAnswer[questions];

    for (int i = 0; i < questions; i++)
    {
        highAnswer[i] = 0;

        for (int j = 0; j < 26; j++)
        {
            questionsAnswer[i][j] = 0;
        }
    }

    int students;
    scanf("%d\n", &students);

    for (int i = 0; i < students; i++)
    {
        char answer[questions + 1];
        scanf("%s", answer);

        for (int j = 0; j < questions; j++)
        {
            if ((answer[j] != desafortunato[j]) && (answer[j] != '\n'))
            {
                questionsAnswer[j][answer[j] - 'A'] = questionsAnswer[j][answer[j] - 'A'] + 1;

                if (questionsAnswer[j][answer[j] - 'A'] > highAnswer[j])
                {
                    highAnswer[j] = questionsAnswer[j][answer[j] - 'A'];
                }
            }
        }
    }

    int maxGrade = 0;
    for (int i = 0; i < questions; i++)
    {
        maxGrade = maxGrade + highAnswer[i];
    }

    printf("%d\n", maxGrade);

    return 0;
}