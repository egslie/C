// Descri��o: Crie um algoritmo que preencha um vetor com 10 n�meros reais, calcule e
// mostre a quantidade de n�meros negativos e a soma dos n�meros positivos
// desse vetor.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float somaPositivo;
    int i, numeros[10], contNegativo = 0, contPositivo = 0;

    printf("Seja Bem-Vind@ a mais um modelo de contagem de n�meros do Sistema Doramal!\n");
    printf("Preencha com seus n�meros: \n");

    for (i = 0; i < 10; i++)
    {
        printf("Digite seu %i� n�meros: \n", i + 1);
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
    // Impress�o Final para o usu�rio;
    for (i = 0; i < 10; i++)
    {
        printf("%i� n�mero: %.1d\n", numeros[i], i + 1);
    }

    // Impress�o Final para o usu�rio:
    printf("\n");
    printf("__________________________________________________________________________\n");
    printf("Quantidade de N� Negativos: %.1d\n", contNegativo);
    printf("Quantidade de N� Positivos: %.1d\n", contPositivo);
    printf("Soma dos N� Positivos: %.2f\n", somaPositivo);
    printf("Obrigada por participar!\n");

    // fim
    return 0;
}