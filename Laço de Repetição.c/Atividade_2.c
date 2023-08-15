// Descrição: Escreva um algoritmo que leia 5 valores inteiros e ao final mostre:
// a) quantos números são pares;
// b) quantos números são impares;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int i, numero[5], par = 0, impar = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite seu o número: \n");
        scanf("%d", &numero[i]);

        if (numero[i] % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }

    system("cls");

    // Impressão final para o usuário.
    printf("Quantidade de n° pares: %d\n", par);
    printf("Quantidade de n° impares: %d\n", impar);
    printf("Obrigada por Participar!\n");

    return 0;
}