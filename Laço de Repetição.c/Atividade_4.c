// Descrição: Escreva um algoritmo que leia a média de um aluno. Caso seja menor que 0 ou maior que 10, mostre a pergunta novamente.
// Após receber a média, verifique se o aluno está aprovado ou
// reprovado considerando que a média para aprovação é maior ou igual
// a 7. Caso a média seja até 5, o aluno está em recuperação, caso seja
// menor que 5, o aluno está reprovado.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int i, cont;
    float media, soma, nota[3];

    printf("Seja Bem-Vind@ ao lançamento de notas do Colégio Doramal!\n");
    printf("Preencha com suas notas: \n");

    // Laço de Repetição "do-while" para nota.
    do
    {
        printf("Digite a sua %f° nota: \n");
        scanf("%f", &nota[i]);
    } while (nota < 0 && nota > 10);

    system("cls");

    // Calculos:
    soma += nota[i];
    cont++;
    media = soma / cont;

    printf("Média: %f\n", media);

    // If-Else para verificar média.
    if (media >= 7)
    {
        printf("Parabéns, APROVAD@!\n");
    }
    if (media == 5)
    {
        printf("Infelizmente, está de RECUPERAÇÃO!\n");
    }
    else
    {
        printf("Que pena, REPROVAD@!\n");
    }

    return 0;
}