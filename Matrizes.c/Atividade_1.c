// Descrição: Crie um algoritmo que receba o três notas de 2 semestres e mostre:

//- 1° semestre:
//- 1a nota: 7
//- 2a nota: 9
//- 3a nota: 8

//- 2° semestre:
//- 1a nota: 8
//- 2a nota: 7
//- 3a nota: 3

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int i, j, semestre[2], notas[2][3];

    printf("Seja Bem-Vind@ a visualização de notas do Colégio Doramal!\n");
    printf("Preencha com suas notas:\n");

    for (i = 0; i < 2; i++)
    {
        printf("Digite qual semestre estará registrando:\n", i + 1);
        scanf("%d", &semestre[i]);

        for (i = 0; i < 3; i++)
        {
            printf("Digite sua %d° nota do semestre: \n", j + 1);
            scanf("%d", &notas[i][j]);
        }
    }

    system("cls");

    for (i = 0; i < 2; i++)
    {
        printf("%d° Semestre: \n", i + 1, semestre[i]);

        for (i = 0; i < 3; i++)
        {
            printf("%d° Nota: %d\n", j + 1, notas[i]);
        }
    }

    // fim
    printf("Obrigada por participar!\n");
    return 0;
}