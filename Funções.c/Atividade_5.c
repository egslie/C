// Descri��o: Escreva um programa que permita ler 3 notas de um aluno e informe por meio de
// fun��es: 
// A m�dia;
// Com base na m�dia, se o aluno est� aprovado ou reprovado.
// Crit�rio para aprova��o: m�dia 7,0.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void mediaResultado(float notas[])
{
    int i;
    float notas[], somaNotas, mediaNotas;

     for (i = 0; i < 3; i++)
    {
        printf("Digite sua %i� nota: \n", i + 1);
        scanf("%f", &notas[i]);

        // Soma:
        somaNotas += notas[i];
    }

    // M�dia:
    mediaNotas = somaNotas / i;
}

void main ()
{
   
    mediaResultado(media)
}

