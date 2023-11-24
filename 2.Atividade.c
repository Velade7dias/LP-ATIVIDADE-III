#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i;
    int j;
    char alunos[5][200];
    int idade[5];
    float notas[5][3];
    float soma = 0;
    float media[5] = {0, 0, 0, 0, 0};

    for (i = 0; i < 5; i++)
    {

        printf("Digite o nome do %dº aluno:\n", i + 1);
        scanf("%s", &alunos[i]);

        system("clear || cls");

        printf("Digite a idade do %dº aluno:\n", i + 1);
        scanf("%d", &idade[i]);

        system("clear || cls");

        for (j = 0; j < 3; j++)
        {

            printf("Digite a %dº nota do aluno:\n", j + 1);
            scanf("%f", &notas[i][j]);

            soma += notas[i][j];

            system("clear || cls");
        }

        media[i] = soma / j;

        soma = 0;
    }

    for (i = 0; i < 5; i++)
    {

        printf("\nNome do %dº aluno:%s\n", i + 1, alunos[i]);
        printf("Idade do %dº aluno:%d\n", i + 1, idade[i]);

        for (j = 0; j < 3; j++)
        {

            printf("%dº do aluno:%f\n", j + 1, notas[i][j]);
        }

        printf("Média:%f\n", media[i]);
        if (media[i] >= 7.0)
        {
            printf("Aprovado!\n");
        }
        else if (media[i] < 7.0 || media[i] >= 5.0)
        {
            printf("Recuperação!\n");
        }
        if (media[i] <= 4.9)
        {
            printf("Reprovado!\n");
        }
    }

    getchar();

    return 0;
}