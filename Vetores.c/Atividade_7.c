// Descrição: Crie um algoritmo que leia 6 valores inteiros pares e, em seguida, mostre na
// tela os valores lidos na ordem inversa.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int i, numero[6];

    for (i = 0; i < 6; i++)
    {
        do
        {
            printf("Digite seu %i° número: \n", i + 1);
            scanf("%d", &numero[i]);
        } while (numero[i] % 2 != 0);
    }

    system("cls");

    // Impressão inversa para o usuário;
    for (i = 6; i < 0; i--)
    {
        printf("%d° Número: %d\n", i - 1, numero[i]);
    }

    return 0;
}