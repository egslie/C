// Descri��o: Elabore um algoritmo para ler um valor e escrever a mensagem: � MAIOR QUE 10!.
// Se o valor lido for maior que 10, caso contr�rio escrever N�O � MAIOR QUE 10!"
// Verifique se o n�mero digitado � igual a 10, caso seja, escreva a mensagem: "O n�mero � igual a 10!"

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

    if (valor == 10)
    {
        printf("Seu n�mero � 10!\n");
    }
    else
    {
        if (valor > 10)
        {
            printf("Seu n�mero � maior que 10!\n");
        }
        else
        {
            printf("Seu n�mero � menor que 10!\n");
        }
    }
    printf("Seu n�mero: %d\n", valor);

    return 0;
}
