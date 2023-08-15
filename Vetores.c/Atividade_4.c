// Descri��o: Crie um programa que leia 6 n�meros, armazenando em um
// vetor e informe quantos s�o pares e quantos s�o i�mpares.
// Mostre os n�meros informados pelo usu�rio.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int i, numero[6], par = 0, impar = 0;

    printf("Vamos verificar a quantidade de n�meros impares e pares!\n");

    for (i = 0; i < 6; i++)
    {
        printf("Digite seu %i� n�mero: \n", i + 1);
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

    // Impress�o dos n�meros do usu�rio:
    for (i = 0; i < 6; i++)
    {
        printf("%i� N�mero: %d\n", numero[i], i + 1);
    }

    // Impress�o final para o usu�rio.
    printf("__________________________________________________________________________\n");
    printf("Quantidade de n� pares: %d\n", par);
    printf("Quantidade de n� impares: %d\n", impar);
    printf("Obrigada por Participar!\n");

    return 0;
}