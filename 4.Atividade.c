#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int i = 0;
    int numeros[5];
    int pares = 0;
    int impares = 0;
    int negativos = 0;
    int quantidadeNumeros = 0;
    int maiorNumero = 0;
    int menorNumero = 150;
    float somaPares = 0;
    float somaTudo = 0;
    float mediaPares;
    float mediaTudo;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %dº número:\n", i + 1);
        scanf("%d", &numeros[i]);

        somaTudo += numeros[i];
        quantidadeNumeros += 1;

        if (numeros[i] % 2 == 0)
        {
            somaPares += numeros[i];
            pares += 1;
        }
        else

            if (numeros[i] < 0)
        {
            negativos += 1;
        }
        else

            if (numeros[i] > maiorNumero)
        {
            maiorNumero = numeros[i];
        }

        if (numeros[i] < menorNumero)
        {
            menorNumero = numeros[i];
        }

        system("Cls || clear");
    }

    mediaPares = somaPares / (float)pares;
    mediaTudo = somaTudo / (float)quantidadeNumeros;

    printf("Quantidade Números Impáres:%d\n", impares);
    printf("Quantidade Números Negativos:%d\n", negativos);
    printf("Maior Número:%d\n", maiorNumero);
    printf("Menor Número:%d\n", menorNumero);
    printf("Média Números Páres:%2.f\n", mediaPares);
    printf("Média De Todos Os Números:%2.f\n", mediaTudo);

    return 0;
}