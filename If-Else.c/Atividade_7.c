// Descrição: Elabore um algoritmo usando operações lógicas para informar se uma pessoa é obrigada a votar.
// Considere que a regra é que menores de 18 e maiores que 65 não são obrigados a votar.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int idade;

    printf("Seja Bem-Vind@ ao processo eleitoral da Preifeitura de Doramal!\n");
    printf("Vamos verificar se pode votar: \n");

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    fflush(stdin);

    // If-Else para verificar idade:
    if (idade >= 18 && idade <= 65)
    {
        printf("Você está apto para votar!\n");
    }
    else
    {
        printf("Você não está apto para votar!\n");
    }

    printf("Obrigada por participar!\n");
    return 0;
}