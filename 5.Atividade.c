#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i;
    int resposta;
    int valor[10];
    char nomes[10][200];
    int contador = 0;

    printf("Deseja adicionar mais um produto?\n");
    printf("Código ///////////////// Resposta\n");
    printf("\n");
    printf("   1                        Sim\n");
    printf("   2                        Não\n");
    scanf("%d", &resposta);

    do
    {

        system("clear || cls");

        printf("Digite o nome do produto:\n");
        scanf("%s", &nomes[contador]);

        fflush(stdin);

        printf("Digite o valor do produto:\n");
        scanf("%f", &valor[contador]);

        system("clear || cls");

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

    getchar();

    return 0;
}