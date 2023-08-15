// Descrição: Crie um programa que leia 5 números, armazenando em um
// vetor e informe qual é o menor número e o maior.
// Mostre os números informados pelo usuário.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int i;
    float numeros[5], maiorNumero = INT_MAX, menorNumero = INT_MIN;

    printf("Seja Bem-Vind@ a avalia��o de n�meros Maiores e Menores da Calc Doramal!\n");
    printf("\n");

    for (i = 0; i < 5; i++)
    {
        printf("Digite seu %i� n�mero: \n", i+1);
        scanf("%f", &numeros[i]);

        system("cls");


        if (numeros[i] < maiorNumero)
        {
            maiorNumero = numeros[i];
            if (numeros[i] > maiorNumero)
            {
                maiorNumero = numeros[i];
            }
            
        }

        if (numeros[i] > menorNumero)
        {
            menorNumero = numeros[i];
            if (numeros[i] < menorNumero)
            {
                 menorNumero = numeros[i];
            }
            
        }
        system("cls");
    }
    fflush(stdin);
    
    for (i = 0; i < 5; i++)
    {
        printf("%d� N�mero: %.1f\n",  i+1,numeros[i]);
        printf("__________________________________________________________________________\n");
    }

    // Impressão do Maior e Menor NÚMERO:
    printf("\n");
    printf("Maior N�mero: %.1f\n", menorNumero);
    printf("Menor N�mero: %.1f\n", maiorNumero);

return 0;

}