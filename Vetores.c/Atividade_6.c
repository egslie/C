// Descrição: Crie um algoritmo que preencha um vetor com 10 números reais, calcule e
// mostre a quantidade de números negativos e a soma dos números positivos
// desse vetor.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float somaPositivo;
    int i, numeros[10], contNegativo = 0, contPositivo = 0;

    printf("Seja Bem-Vind@ a mais um modelo de contagem de números do Sistema Doramal!\n");
    printf("Preencha com seus números: \n");

    for (i = 0; i < 10; i++)
    {
        printf("Digite seu %i° números: \n", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] < 0)
        {
            contNegativo++;
        }
        else
        {
            numeros[i] % 2 == 0;
            contPositivo++;
            somaPositivo += numeros[i];
        }

        system("cls");
    }
    // Impressão Final para o usuário;
    for (i = 0; i < 10; i++)
    {
        printf("%i° número: %.1d\n", numeros[i], i + 1);
    }

    // Impressão Final para o usuário:
    printf("\n");
    printf("__________________________________________________________________________\n");
    printf("Quantidade de N° Negativos: %.1d\n", contNegativo);
    printf("Quantidade de N° Positivos: %.1d\n", contPositivo);
    printf("Soma dos N° Positivos: %.2f\n", somaPositivo);
    printf("Obrigada por participar!\n");

    // fim
    return 0;
}