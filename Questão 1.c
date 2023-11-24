#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nome[5][250];
    int idade[5];
    float peso[5];
    float altura[5];
    int i;
    float maiorPeso = -9999;
    float menorPeso = 9999;
    float maiorAltura = -9999;
    float menorAltura = 9999;
    int maiorIdade = -9999;
    int menorIdade = 9999;
    char nomeMaiorPeso[5][250];

    for (i = 0; i < 5; i++)
    {
        printf("%dº pessoa\n\n", i + 1);
        printf("Informe o seu nome: ");
        gets(nome[i]);

        printf("Informe a sua idade: ");
        scanf("%d", &idade[i]);

        printf("Informe o seu peso: ");
        scanf("%f", &peso[i]);

        printf("Informe a sua altura: ");
        scanf("%f", &altura[i]);

        maiorAltura = maiorAltura > altura[i] ? maiorAltura : altura[i];
        menorAltura = menorAltura < altura[i] ? menorAltura : altura[i];

        maiorPeso = maiorPeso > peso[i] ? maiorPeso : peso[i];
        menorPeso = menorPeso < peso[i] ? menorPeso : peso[i];

        maiorIdade = maiorIdade > idade[i] ? maiorIdade : idade[i];
        menorIdade = menorIdade < idade[i] ? menorIdade : idade[i];

        fflush(stdin);
        printf("\n\n");
    }

    for (i = 0; i < 5; i++)
    {
        printf("\n%dº pessoa", i + 1);
        printf("Nome: %s\n", nome[i]);
        printf("Idade: %d", idade[i]);
        printf("Peso: %f", peso[i]);
        printf("Altura: %f", altura[i]);
    }

    printf("Nome e altura da pessoa mais alta: %s %f\n", maiorAltura);
    printf("Nome e altura da pessoa mais baixa: %s %f\n", menorAltura);
    printf("Nome e peso da pessoa mais pesada: %s %f\n", maiorPeso);
    printf("Nome e peso da pessoa mais leve: %s %f\n", menorPeso);
    printf("Nome e idade da pessoa mais nova: %s %d\n", menorIdade);
    printf("Nome e idade da pessoa mais velha: %s %d\n", maiorIdade);

    return 0;
}