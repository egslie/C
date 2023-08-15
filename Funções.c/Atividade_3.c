// Descrição: Fazer um programa em C que pergunta um valor em
// metros e imprime o correspondente em centímetros.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void valorCent(float dadoUm)
{
    float centValor;

    centValor = dadoUm * 100;

    system("cls");
    printf("Valor em METROS: %.0f\n", dadoUm);
    printf("Valor em CENTIMENTROS: %.0f\n", centValor);
}

int main()
{
    setlocale(LC_ALL, "");
    float dado;

    printf("Seja Bem-Vind@ ao Conversor da Calc Doramal!\n");
    printf("Digite seu valor em metros: \n");
    scanf("%f", &dado);

    valorCent(dado);

    return 0;
}
