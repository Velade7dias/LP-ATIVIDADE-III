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
    printf("C�digo ///////////////// Resposta\n");
    printf("\n");
    printf("   1                        Sim\n");
    printf("   2                        N�o\n");
    scanf("%d", &resposta);

    do
    {

        system("clear || cls");

        printf("Digite o nome:\n");
        scanf("%s", &nomes[contador]);

        fflush(stdin);

        printf("Digite o n�mero:\n");
        scanf("%d", &numeros[contador]);

        system("clear || cls");

        contador++;

        printf("Deseja adicionar mais um contato?\n");
        printf("C�digo ///////////////// Resposta\n");
        printf("\n");
        printf("   1                        Sim\n");
        printf("   2                        N�o\n");
        scanf("%d", &resposta);

    } while (resposta != 2);

    printf("             AGENDA    ");

    for (i = 0; i < contador; i++)
    {

        printf("\n%d� Nome:%s\n", i + 1, nomes[i]);
        printf("%d� Numero:%d\n", i + 1, numeros[i]);
    }

    getchar();

    return 0;
}