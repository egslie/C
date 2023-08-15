// Descrição: Elabore um algoritmo para receber dois inteiros como entrada do teclado e escreva na tela:
// A média, a soma, o produto, o menor valor e o maior valor.
// Além disso, verifique se os números informados pelo usuário são iguais.
// Usando uma linha para cada resultado.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int numeroPrim, numeroSegun;
    float media, soma, produto;

    printf("Olá, seja bem-vind@ a análise de números do Colégio Doramal!\n");
    printf("Digite seu 1° número: \n");
    scanf("%d", &numeroPrim);
    printf("Digite seu 2° número: \n");
    scanf("%d", &numeroSegun);

    system("cls");

    // Calculos:
    soma = numeroPrim + numeroSegun;
    produto = numeroPrim * numeroSegun;
    media = (numeroPrim * numeroSegun) / 2;

    // If-else para verificar se números são iguais:
    if (numeroPrim = numeroSegun)
    {
        printf("Seus números são iguais!\n");
    }
    else
    {
        // If-Else para maior:
        if (numeroPrim > numeroSegun)
        {
            printf("Maior Numero: %d\n", numeroPrim);
        }
        else
        {
            printf("Maior Número: %d\n", numeroSegun);
        }

        // If-Else para menor:
        if (numeroPrim < numeroSegun)
        {
            printf("Menor Número: %d\n", numeroPrim);
        }
        else
        {
            printf("Menor Número: %d\n", numeroSegun);
        }
    }

    // Impressão Final para o usuário
    printf("\n");
    printf("Média: %.2f\n", media);
    printf("Produto: %1.f\n", produto);
    printf("Soma: %1.f\n", soma);
    printf("\n");
    printf("Obrigada por participar!\n");

    return 0;
}
