#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    int inscricao;
    float nota;
};

int main()
{
#define N 100
    int i, n;
    struct aluno vet[N];
    struct aluno vencedor;
    float nota_min = 8.0;
    scanf("%i", &n); // Número de alunos.
    for (i = 0; i < n; i++)
    {
        scanf("%i %f", &vet[i].inscricao, &vet[i].nota);
        if (i == 0)
        {
            vencedor.inscricao = vet[i].inscricao;
            vencedor.nota = vet[i].nota;
        }
        if (vet[i].nota > vencedor.nota)
        {
            vencedor.inscricao = vet[i].inscricao;
            vencedor.nota = vet[i].nota;
        }
    }
    if (vencedor.nota < 8.0)
    {
        printf("Minimum note not reached\n");
        return 0;
    }
    printf("%i\n", vencedor.inscricao);
    return 0;
}