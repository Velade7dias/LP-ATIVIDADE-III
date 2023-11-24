#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int i;
    int resposta;
    int numeros[10];
    char nomes[10][200];
    int contador = 0;

    printf("Deseja adicionar mais um contato?\n");
    printf("Código ///////////////// Resposta\n");
    printf("\n");
    printf("   1                        Sim\n");
    printf("   2                        Não\n");
    scanf("%d", &resposta);

    do
    {

        system("clear || cls");

        printf("Digite o nome:\n");
        scanf("%s", &nomes[contador]);

        fflush(stdin);

        printf("Digite o número:\n");
        scanf("%d", &numeros[contador]);

        system("clear || cls");

        contador++;

        printf("Deseja adicionar mais um contato?\n");
        printf("Código ///////////////// Resposta\n");
        printf("\n");
        printf("   1                        Sim\n");
        printf("   2                        Não\n");
        scanf("%d", &resposta);

    } while (resposta != 2);

    printf("             AGENDA    ");

    for (i = 0; i < contador; i++)
    {

        printf("\n%dº Nome:%s\n", i + 1, nomes[i]);
        printf("%dº Numero:%d\n", i + 1, numeros[i]);
    }

    getchar();

    return 0;
}