// Descrição: Fazer um programa em C que lê o preço de um produto e inflaciona esse
// preço em 10% se ele for menor que 100 e em 20% se ele for maior ou
// igual a 100.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calcInflacao(float precoUm)
{
    float produto;

    if (precoUm < 100)
    {
        // 10% de inflação:
        produto = precoUm + (precoUm * 0.1);
    }
    else
    {
        // 20% de inflação:
        produto = precoUm + (precoUm * 0.2);
    }
    system("cls");
    printf("O preço do produto inflacionado é de: %.2f\n", produto);
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