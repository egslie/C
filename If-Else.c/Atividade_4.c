// Descrição: Elabore um algoritmo para receber dois inteiros como entrada do teclado e escreva na tela:
// A média, a soma, o produto, o menor valor e o maior valor.
// Usando uma linha para cada resultado.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int numeroPrim, numeroSegun;
    float media, soma, produto;

    printf("Ol�, seja bem-vind@ a an�lise de n�meros do Col�gio Doramal!\n");
    printf("Digite seu 1� n�mero: \n");
    scanf("%d", &numeroPrim);
    printf("Digite seu 2� n�mero: \n");
    scanf("%d", &numeroSegun);

    system("cls");

    // Calculos:
    soma = numeroPrim + numeroSegun;
    produto = numeroPrim * numeroSegun;
    media = (numeroPrim * numeroSegun) / 2;

    // If-Else para maior:
    if (numeroPrim > numeroSegun)
    {
        printf("Maior N�mero: %d\n", numeroPrim);
    }else{
        printf("Maior N�mero: %d\n", numeroSegun);
    }

    // If-Else para menor:
    if (numeroPrim < numeroSegun)
    {
        printf("Menor N�mero: %d\n", numeroPrim);
    }else{
        printf("Menor N�mero: %d\n", numeroSegun);
    }

    // Impressão Final para o usuário
    printf("\n");
    printf("M�dia: %.2f\n", media);
    printf("Produto: %1.f\n", produto);
    printf("Soma: %1.f\n", soma);
    printf("\n");
    printf("Obrigada por participar!\n");

    return 0;
}