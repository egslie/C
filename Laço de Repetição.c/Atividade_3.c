// Descri��o: Escrever um programa de computador que leia 5
// n�meros inteiros e, ao final, apresente a soma de
// todos os n�meros lidos.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int i;
    float numero[5], soma;

    printf("Seja Bem-Vind@, preencha com seus n�meros da sorte!\n");

        for (i = 0; i < 5; i++)
    {
        printf("Digite seu %f� n�mero: \n");
        scanf("%f", &numero[i]);
        soma += numero[i];
    }

    system("cls");


    //Impress�o Final para o usu�rio.
    printf("Soma dos N�meros: %f\n", soma);
    printf("Obrigada por participar!\n");

    return 0;
}
