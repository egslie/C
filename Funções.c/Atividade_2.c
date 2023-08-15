//Descrição: Faça um programa em C que imprime uma tabela com a
//tabuada de um número informado pelo usuário de 1 a 10.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

void tabuada(int numero)
{
    int i; 
for (i = 1; i <=10; ++i)
{
    printf("%ix%i = %i\n", i, numero, i*numero);
}
}

int main ()
{
    setlocale(LC_ALL,"");
    int numero = 0;

    printf("Seja bem-vind@ a Calculadora Doramal!\n");
    printf("Digite seu número: \n");
    scanf("%i", &numero);

    tabuada(numero);

    return 0;
}
