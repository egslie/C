// Descrição: Crie um programa que leia 3 notas, armazenando em um
// vetor e calcule a média aritmética.
// Mostre as 3 notas informadas pelo usuário e informe a média.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    int i;
    float notas[3], somaNotas, mediaNotas;

    printf("Seja Bem-Vind@ ao Programa de notas do Colégio Doramal!\n");

    for (i = 0; i < 3; i++)
    {
        printf("Digite sua %i° nota: \n", i + 1);
        scanf("%f", &notas[i]);

        // Soma:
        somaNotas += notas[i];
    }

    // Média:
    mediaNotas = somaNotas / i;

    system("cls");
    // ImpressÃ£o Final para o usuÃ¡rio;
    for (i = 0; i < 3; i++)
    {
        printf("%i° Nota: %.1f\n", i + 1, notas[i]);
    }

    printf("\n");
    printf("Média: %.1f\n", mediaNotas);
    printf("\n");
    printf("__________________________________________________________________________\n");

    if (mediaNotas >= 7)
    {
        printf("Parabens, você está APROVADO!\n");
    }
    if (mediaNotas >= 5)
    {
        printf("Que pena, você está de RECUPERACÃO!\n");
    }
    else
    {
        printf("Infelizmente, você está REPROVADO!\n");
    }
}