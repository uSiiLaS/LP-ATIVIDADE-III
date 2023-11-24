#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char resultado[5][250];
    char nome[5][250];
    int idade[5];
    float notas[5][3];
    float media[5];
    float soma;
    int i, j;

    for (i = 0; i < 5; i++)
    {
        printf("Informe o seu nome: ");
        gets(nome[i]);

        printf("Informe a sua idade: ");
        scanf("%d", &idade[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Informe a %dº nota: ", j + 1);
            scanf("%f", &notas[i][j]);
            soma += notas[i][j];
        }
        media[i] = soma / (float) j;
        printf("\n");
        fflush(stdin);
        soma = 0;
    }

    system("cls || clear");

    for (i = 0; i < 5; i++)
    {
        if (media[i] >= 7)
        {
            strcpy(resultado[i], "Aprovado!");
        }
        else if (media[i] >= 5)
        {
            strcpy(resultado[i], "Recuperação!");
        }
        else
        {
            strcpy(resultado[i], "Reprovado!");
        }

        printf("%dº aluno\n", i + 1);
        printf("Nome: %s\n", nome[i]);
        printf("Idade: %d\n", idade[i]);
        for (j = 0; j < 3; j++)
        {
            printf("%dº nota: %.2f\n", j + 1, notas[i][j]);
        }
        printf("Média: %.2f\n", media[i]);
        printf("%s\n", resultado[i]);
        printf("\n");
    }

    return 0;
}