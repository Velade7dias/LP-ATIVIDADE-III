#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

setlocale(LC_ALL, "portuguese");

int i;
char nome[5][200];
char maiorNome[3];
char menorNome[3];
float idade[5];
float peso[5];
float altura[5];
float maiorValor[3] = {150,150,150};
float menorValor[3] = {0,0,0};

for(i = 0; i < 5; i++){

printf("\nDigite o nome da %dº pessoa:", i + 1);
scanf("%s", &nome[i]);

system("cls || clear");

printf("\nDigite a idade da %dº pessoa:", i + 1);
scanf("%f", &idade[i]);

if(idade[i] > maiorValor[0]){
    maiorValor[0] = idade[i];
    maiorNome[0] = nome[i];
} else {
    menorValor[0] = idade[i];
    menorNome[0] = nome[i];
}

system("clear || cls");

printf("\nDigite o peso da %dº pessoa", i + 1);
scanf("%f", &peso[i]);

if(peso[i] > maiorValor[1]){
    maiorValor[1] = peso[i];
    maiorNome[1] = nome[i];
} else {
    menorValor[1] = peso[i];
    menorNome[1] = nome[i];
}

system("clear || cls");

printf("Digite a altura da %dº pessoa", i + 1);
scanf("%f", &altura[i]);

if(altura[i] > maiorValor[2]){
    maiorValor[2] = altura[i];
    maiorNome[2] = nome[i];
} else {
    menorValor[2] = altura[i];
    menorNome[2] = nome[i];
}

system("clear || cls");

}

for( i = 0; i < 5; i++){
    printf("\nNome da %dº pessoa:%s\n", i + 1, nome[i]);
    printf("Idade da %dº pessoa:%2.f\n", i + 1, idade[i]);
    printf("Peso da %dº pessoa:%2.f\n", i + 1, peso[i]);
    printf("Altura da %dº pessoa:%2.f\n", i + 1, altura[i]);
}

printf("\nNome da pessoa mais velha:%s\n", maiorNome[0]);
printf("Maior idade:%1.f\n", maiorValor[0]);

printf("\nNome da pessoa com mais peso:%s\n", maiorNome[1]);
printf("Maior peso:%2.f\n", maiorValor[1]);

printf("\nNome da pessoa mais alta:%s\n", maiorNome[2]);
printf("Maior altura:%2.f\n", maiorValor[2]);

printf("\nNome da pessoa mais nova:%s\n", menorNome[0]);
printf("Menor altura:%2.f\n", menorValor[0]);

printf("\nNome da pessoa com menos peso:%s\n", menorNome[1]);
printf("Menor peso:%2.f\n", menorValor[1]);

printf("\nNome da pessoa com menos altura:%s\n", menorNome[2]);
printf("Menor altura:%2.f\n", menorValor[2]);

getchar();

    return 0;
}