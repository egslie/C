// Descrição: Elabore um algoritmo para ler um valor e escrever a mensagem:
// MAIOR QUE 10! se o valor lido for maior que 10, caso contrário escrever "Não é MAIOR QUE 10!

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int valor;

    printf("Seja Bem-Vind@, Digite seu número: ");
    scanf("%d", &valor);
    system("cls");

    if (valor >= 10)
    {
        printf("Seu número é maior ou igual à 10!\n");
    }
    else
    {
        printf("Seu número é menor que 10!\n");
    }

    printf("Seu número: %d\n", valor);

    return 0;
}
