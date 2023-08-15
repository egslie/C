// Descri��o: Crie um programa que leia 3 notas, armazenando em um
// vetor e calcule a m�dia aritm�tica.
// Mostre as 3 notas informadas pelo usu�rio e informe a m�dia.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    int i;
    float notas[3], somaNotas, mediaNotas;

    printf("Seja Bem-Vind@ ao Programa de notas do Col�gio Doramal!\n");

    for (i = 0; i < 3; i++)
    {
        printf("Digite sua %i� nota: \n", i + 1);
        scanf("%f", &notas[i]);

        // Soma:
        somaNotas += notas[i];
    }

    // M�dia:
    mediaNotas = somaNotas / i;

    system("cls");
    // Impressão Final para o usuário;
    for (i = 0; i < 3; i++)
    {
        printf("%i� Nota: %.1f\n", i + 1, notas[i]);
    }

    printf("\n");
    printf("M�dia: %.1f\n", mediaNotas);
    printf("\n");
    printf("__________________________________________________________________________\n");

    if (mediaNotas >= 7)
    {
        printf("Parabens, voc� est� APROVADO!\n");
    }
    if (mediaNotas >= 5)
    {
        printf("Que pena, voc� est� de RECUPERAC�O!\n");
    }
    else
    {
        printf("Infelizmente, voc� est� REPROVADO!\n");
    }
}