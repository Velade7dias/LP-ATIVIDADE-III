#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i = 0;
    int j;
    int resposta;
    float valor[10];
    char nomes[10][200];
    float quantidade[10];
    int contador = 0;
    float vendaFinal = 0;

    printf("Deseja adicionar mais um produto?\n");
    printf("Código ///////////////// Resposta\n");
    printf("\n");
    printf("   1                        Sim\n");
    printf("   2                        Não\n");
    scanf("%d", &resposta);

    do
    {

        system("clear || cls");

        fflush(stdin);

        printf("Digite o nome do produto:\n");
        gets(nomes[contador]);

        printf("Digite o valor do produto:\n");
        scanf("%f", &valor[contador]);

        system("clear || cls");

        printf("Digite a quantidade do produto:\n");
        scanf("%f", &quantidade[contador]);

        system("clear || cls");

        vendaFinal = vendaFinal + valor[contador] * quantidade[contador];

        contador++;

        printf("Deseja adicionar mais um produto?\n");
        printf("Código ///////////////// Resposta\n");
        printf("\n");
        printf("   1                        Sim\n");
        printf("   2                        Não\n");
        scanf("%d", &resposta);

    } while (resposta != 2);

    printf("            PRODUTOS    ");

    for (i = 0; i < contador; i++)
    {

        printf("\n%dº Nome:%s\n", i + 1, nomes[i]);
        printf("%dº Valor:%2.f\n", i + 1, valor[i]);
    }

    printf("Valor total:%2.f\n", vendaFinal);

    getchar();

    return 0;
}
