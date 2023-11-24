#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int codigo;
    char nomes[250][250];
    char numero[250][15];
    int i;
    int j = 0;

    do
    {
        printf("\t1|\tADICIONAR UM NÚMERO\n");
        printf("\t2|\tMOSTRAR OS NÚMEROS CADASTRADOS\n\n");
        printf("\tInforme o código desejado: ");
        scanf("%d", &codigo);

        switch (codigo)
        {
        case 1:

            fflush(stdin);
            printf("\n\tInforme o nome para contato: ");
            gets(nomes[j]);
            printf("\tInforme o número de contato: ");
            scanf("%s", &numero[j]);
            printf("\n");

            j++;

            break;
        case 2:
            system("cls || clear");
            for (i = 0; i < j; i++)
            {
                printf("%dº contato\n", i + 1);
                printf("Nome: %s\n", nomes[i]);
                printf("Número: %s\n", numero[i]);
                printf("\n");
            }
            break;
        }

    } while (codigo == 1);

    return 0;
}