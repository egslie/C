// Descri��o: Crie um algoritmo que leia 6 valores inteiros pares e, em seguida, mostre na
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
            printf("Digite seu %i� n�mero: \n", i + 1);
            scanf("%d", &numero[i]);
        } while (numero[i] % 2 != 0);
    }

    system("cls");

    // Impress�o inversa para o usu�rio;
    for (i = 6; i < 0; i--)
    {
        printf("%d� N�mero: %d\n", i - 1, numero[i]);
    }

    return 0;
}