/*Descrição: Crie uma função em linguagem C que receba 2 números e
retorne o maior e menor valor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void maiorNumero(int n1, int n2)
{
    int maior;
    if (n1 > n2)
    {
        maior = n1;
    }
    else
    {
        maior = n2;
    }

    printf("O Maior Número: %d \n", maior);
}

void menorNumero(int n1, int n2)
{
    int menor;
    if (n1 < n2)
    {
        menor = n1;
    }
    else
    {
        menor = n2;
    }

    printf("O Menor Número: %d \n", menor);
}

int main()
{
    setlocale(LC_ALL, "");
    int numPrim, numSegun;

    printf("Digite o seu 1° numero: \n");
    scanf("%d", &numPrim);

    printf("Digite o seu 2° numero: \n");
    scanf("%d", &numSegun);

    system("cls");

    maiorNumero(numPrim, numSegun);
    menorNumero(numPrim, numSegun);

    return 0;
}