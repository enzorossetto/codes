#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cell *pointer;

struct cell
{
    pointer next;
};

typedef struct
{
    pointer head;
} Pile;

void emptyList(Pile *pile)
{
    pile->head = (pointer)malloc(sizeof(struct cell));
    pile->head->next = NULL;
}

void addElement(Pile *pile)
{
    pointer p;
    p = (pointer)malloc(sizeof(struct cell));

    p->next = pile->head;
    pile->head = p;
}

void removeElement(Pile *pile)
{
    pointer p;
    p = pile->head;

    pile->head = pile->head->next;

    free(p);
}

char *getln()
{
    char *line = NULL, *tmp = NULL;
    size_t size = 0, index = 0;
    int ch = 0;

    while ((ch != EOF) && (ch != '\n'))
    {
        ch = getc(stdin);

        if (size <= index)
        {
            size += sizeof(char);
            tmp = realloc(line, size);
            if (!tmp)
            {
                free(line);
                line = NULL;
                break;
            }
            line = tmp;
        }

        line[index++] = ch;
    }

    return line;
}

int main()
{
    char *equation;
    Pile pile;

    equation = getln();

    while (*equation != EOF)
    {
        int error = 0;
        emptyList(&pile);

        for (int i = 0; i < strlen(equation); i++)
        {
            if ((equation[i] == '(') && (error == 0))
            {
                addElement(&pile);
            }
            else if ((equation[i] == ')') && (pile.head->next != NULL) && (error == 0))
            {
                removeElement(&pile);
            }
            else if ((equation[i] == ')') && (pile.head->next == NULL))
            {
                error = 1;
            }
        }

        if (pile.head->next != NULL)
        {
            error = 1;
        }

        if (error == 0)
        {
            printf("correct\n");
        }
        else
        {
            printf("incorrect\n");
        }

        equation = getln();
    }

    free(equation);

    return (0);
}
