// Descri��o: Elabore um algoritmo para ler um valor e escrever a mensagem:
// MAIOR QUE 10! se o valor lido for maior que 10, caso contr�rio escrever "N�o � MAIOR QUE 10!

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int valor;

    printf("Seja Bem-Vind@, Digite seu n�mero: ");
    scanf("%d", &valor);
    system("cls");

    if (valor >= 10)
    {
        printf("Seu n�mero � maior ou igual � 10!\n");
    }
    else
    {
        printf("Seu n�mero � menor que 10!\n");
    }

    printf("Seu n�mero: %d\n", valor);

    return 0;
}
