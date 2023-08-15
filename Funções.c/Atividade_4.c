// Descri��o: Fazer um programa em C que l� o pre�o de um produto e inflaciona esse
// pre�o em 10% se ele for menor que 100 e em 20% se ele for maior ou
// igual a 100.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calcInflacao(float precoUm)
{
    float produto;

    if (precoUm < 100)
    {
        // 10% de infla��o:
        produto = precoUm + (precoUm * 0.1);
    }
    else
    {
        // 20% de infla��o:
        produto = precoUm + (precoUm * 0.2);
    }
    system("cls");
    printf("O pre�o do produto inflacionado � de: %.2f\n", produto);
}

int main()
{
    setlocale(LC_ALL, "");
    float preco;

    printf("Seja Bem-Vind@ a Bolsa de Valores de Doramal!\n");
    printf("Digite o valor do seu produto: \n");
    scanf("%f", &preco);

    calcInflacao(preco);
    printf("Valor do Produto: %.2f\n", preco);

    return 0;
}