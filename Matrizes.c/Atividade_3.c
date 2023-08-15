// Descrição: Crie um algoritmo que receba o nome de três disciplinas, receba duas notas
// para cada disciplina:

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "");
    int i, j;
    char disciplina[3][250];
    float media[3], soma = 0, notas[3][2];

    printf("Seja Bem-Vind@ a visualização de notas e média do Colégio Doramal!\n");
    printf("Preencha com suas notas:\n");

    for (i = 0; i < 3; i++)
    {
        printf("Digite qual matéria estará registrando:\n", i + 1);
        gets(disciplina[i]);

        for (i = 0; i < 2; i++)
        {
            printf("Digite sua %i° nota de %s: \n", j + 1);
            scanf("%d", &notas[i][j]);
            soma += notas[i][j];
        }

        media[i] = soma / 2;
        fflush(stdin);
    }

    system("cls");

    for (i = 0; i < 3; i++)
    {
        printf("%s\n: ", i + 1, disciplina[i]);

        for (i = 0; i < 2; i++)
        {
            printf("%i ° Nota: %f\n", j + 1, notas[i]);
        }

        printf("Média: %.2f\n", media[i]);
    }

    // fim
    printf("__________________________________________________________________________\n");
    printf("Obrigada por participar!\n");
    return 0;
}
