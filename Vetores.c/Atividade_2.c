// Descri��o: Crie um programa que leia 4 notas, armazenando em um
// vetor e calcule a m�dia aritmetica.
// Verifique a situa��o do aluno considerando:
//- M�dia maior ou igual a 7: Aprovado.
//- M�dia maior ou igual a 5: Recupera��o.
//- M�dia menor que 5: Reprovado.
// Mostre as 4 notas informadas pelo usu�rio e informe a m�dia.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    int i;
    float notas[4], somaNotas, mediaNotas;

    printf("Seja Bem-Vind@ ao Programa de notas do Col�gio Doramal!\n");

    for (i = 0; i < 4; i++)
    {
        printf("Digite sua %i� nota: \n", i + 1);
        scanf("%f", &notas[i]);

        // Soma:
        somaNotas += notas[i];
    }

    // Média:
    mediaNotas = somaNotas / i;

    system("cls");
    // Impressão Final para o usuário;
    for (i = 0; i < 4; i++)
    {
        printf("%i� Nota: %.1f\n", i + 1, notas[i]);
    }

    printf("\n")
        printf("M�dia: %.2f\n", mediaNotas);
    printf("\n");
    printf("__________________________________________________________________________\n");

    if (mediaNotas >= 7)
    {
        printf("Parab�ns, voc� est� APROVADO!\n");
    }
    else if (mediaNotas >= 5)
    {
        printf("Que pena, voc� est� de RECUPERA��O!\n");
    }
    else
    {
        printf("Infelizmente, voc� est� REPROVADO!\n");
    }
}