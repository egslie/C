// Descri��o: Escreva um algoritmo que leia a m�dia de um aluno. Caso seja menor que 0 ou maior que 10, mostre a pergunta novamente.
// Ap�s receber a m�dia, verifique se o aluno est� aprovado ou
// reprovado considerando que a m�dia para aprova��o � maior ou igual
// a 7. Caso a m�dia seja at� 5, o aluno est� em recupera��o, caso seja
// menor que 5, o aluno est� reprovado.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int i, cont;
    float media, soma, nota[3];

    printf("Seja Bem-Vind@ ao lan�amento de notas do Col�gio Doramal!\n");
    printf("Preencha com suas notas: \n");

    // La�o de Repeti��o "do-while" para nota.
    do
    {
        printf("Digite a sua %f� nota: \n");
        scanf("%f", &nota[i]);
    } while (nota < 0 && nota > 10);

    system("cls");

    // Calculos:
    soma += nota[i];
    cont++;
    media = soma / cont;

    printf("M�dia: %f\n", media);

    // If-Else para verificar m�dia.
    if (media >= 7)
    {
        printf("Parab�ns, APROVAD@!\n");
    }
    if (media == 5)
    {
        printf("Infelizmente, est� de RECUPERA��O!\n");
    }
    else
    {
        printf("Que pena, REPROVAD@!\n");
    }

    return 0;
}