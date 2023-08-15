// Descrição: Crie um algoritmo que receba o três notas de 2 semestres e informe a média:

//- 1o semestre:
//- 1a nota: 7
//- 2a nota: 9
//- 3a nota: 8
//- Média: 8,0

//- 2o semestre:
//- 1a nota: 8
//- 2a nota: 7
//- 3a nota: 3
//- Média: 6,0

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int i, j, semestre[2];
    float media[2], soma = 0, notas[2][3];

    printf("Seja Bem-Vind@ a visualização de notas e média do Colégio Doramal!\n");
    printf("Preencha com suas notas:\n");

    for (i = 0; i < 2; i++)
    {
        printf("Digite qual semestre estará registrando:\n", i + 1);
        scanf("%d", &semestre[i]);

        for (i = 0; i < 3; i++)
        {
            printf("Digite sua %i° nota do semestre: \n", j + 1);
            scanf("%f", &notas[i][j]);
        }

        media[i] = soma / j;
        fflush(stdin);
    }

    system("cls");

    for (i = 0; i < 2; i++)
    {
        printf("%i° Semestre: \n", i + 1, semestre[i]);

        for (i = 0; i < 3; i++)
        {
            printf("%i° Nota: %f\n", j + 1, notas[i]);
        }

        printf("Média: %.2f\n", media[i]);
    }

    // fim
    printf("__________________________________________________________________________\n");
    printf("Obrigada por participar!\n");
    return 0;
}