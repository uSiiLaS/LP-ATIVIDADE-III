#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numeros[5];
    int i;
    int maior = -9999;
    int menor = 9999;
    int par = 0;
    int somaPar = 0;
    float mediaPar = 0;
    int somaGeral = 0;
    float mediaGeral = 0;
    int impar = 0;
    int negativo = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Informe o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] < 0)
        {
            negativo++;
        }

        maior = maior > numeros[i] ? maior : numeros[i];
        menor = menor < numeros[i] ? menor : numeros[i];

        if (numeros[i] % 2 == 0)
        {
            par++;
            somaPar += numeros[i];
        }
        else
        {
            impar++;
        }
        somaGeral += numeros[i];
    }
    mediaGeral = (float)somaGeral / (impar + par);
    mediaPar = (float)somaPar / par;

    printf("\nQuantidade de números ÍMPARES: %d\n", impar);
    printf("Quantidade de números NEGATIVOS: %d\n", negativo);
    printf("Maior número: %d\nMenor número: %d\n", maior, menor);
    printf("Media dos números PARES: %.2f\n", mediaPar);
    printf("Media geral: %.2f\n", mediaGeral);

        return 0;
}