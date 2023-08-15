// Descrição: Escreva um programa que permita ler 3 notas de um aluno e informe por meio de
// funções: 
// A média;
// Com base na média, se o aluno está aprovado ou reprovado.
// Critério para aprovação: média 7,0.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void mediaResultado(float notas[])
{
    int i;
    float notas[], somaNotas, mediaNotas;

     for (i = 0; i < 3; i++)
    {
        printf("Digite sua %i° nota: \n", i + 1);
        scanf("%f", &notas[i]);

        // Soma:
        somaNotas += notas[i];
    }

    // Média:
    mediaNotas = somaNotas / i;
}

void main ()
{
   
    mediaResultado(media)
}

