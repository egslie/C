// Descrição: Crie um programa que leia 6 números, armazenando em um
// vetor e informe quantos são pares e quantos são i­mpares.
// Mostre os números informados pelo usuário.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int i, numero[6], par = 0, impar = 0;

    printf("Vamos verificar a quantidade de números impares e pares!\n");

    for (i = 0; i < 6; i++)
    {
        printf("Digite seu %i° número: \n", i + 1);
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

    // Impressão dos números do usuário:
    for (i = 0; i < 6; i++)
    {
        printf("%i° Número: %d\n", numero[i], i + 1);
    }

    // Impressão final para o usuário.
    printf("__________________________________________________________________________\n");
    printf("Quantidade de n° pares: %d\n", par);
    printf("Quantidade de n° impares: %d\n", impar);
    printf("Obrigada por Participar!\n");

    return 0;
}