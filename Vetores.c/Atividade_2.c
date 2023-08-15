// Descrição: Crie um programa que leia 4 notas, armazenando em um
// vetor e calcule a média aritmetica.
// Verifique a situação do aluno considerando:
//- Média maior ou igual a 7: Aprovado.
//- Média maior ou igual a 5: Recuperação.
//- Média menor que 5: Reprovado.
// Mostre as 4 notas informadas pelo usuário e informe a média.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    int i;
    float notas[4], somaNotas, mediaNotas;

    printf("Seja Bem-Vind@ ao Programa de notas do Colégio Doramal!\n");

    for (i = 0; i < 4; i++)
    {
        printf("Digite sua %i° nota: \n", i + 1);
        scanf("%f", &notas[i]);

        // Soma:
        somaNotas += notas[i];
    }

    // MÃ©dia:
    mediaNotas = somaNotas / i;

    system("cls");
    // ImpressÃ£o Final para o usuÃ¡rio;
    for (i = 0; i < 4; i++)
    {
        printf("%i° Nota: %.1f\n", i + 1, notas[i]);
    }

    printf("\n")
        printf("Média: %.2f\n", mediaNotas);
    printf("\n");
    printf("__________________________________________________________________________\n");

    if (mediaNotas >= 7)
    {
        printf("Parabéns, você está APROVADO!\n");
    }
    else if (mediaNotas >= 5)
    {
        printf("Que pena, você está de RECUPERAÇÃO!\n");
    }
    else
    {
        printf("Infelizmente, você está REPROVADO!\n");
    }
}