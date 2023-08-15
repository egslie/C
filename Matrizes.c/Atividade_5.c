// Descrição: • Crie um algoritmo que receba o nome de três disciplinas, receba três notas para
// cada disciplina e mostre a média ponderada de cada disciplina:

// Nome da disciplina: Lógica de programação
// 1a nota: 8,0 peso 3
// 2a nota: 9,0 peso 3
// 3a nota: 7,0 peso 4
// Média: 7,9

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "");
    int i, j;
    char disciplina[3][250];
    float media[3], soma[3], notas[3][3], peso[3], somaPeso;

    printf("Seja Bem-Vind@ a visualização de notas e média do Colégio Doramal!\n");
    printf("Preencha com suas notas:\n");

    for (i = 0; i < 3; i++)
    {
        printf("Digite qual matéria estará registrando:\n", i + 1);
        gets(disciplina[i]);

        fflush(stdin);

        printf("Qual o peso de %s: \n");
        scanf("%f", &peso[i]);

        for (i = 0; i < 3; i++)
        {
            printf("Digite sua %i° nota de %s: \n", j + 1);
            scanf("%d", &notas[i][j]);
            soma[i] += notas[i][j];
        }
        soma[i] = soma[i]* peso[i];
        somaPeso += peso[i];
        media[i] = soma[i] / somaPeso;

        fflush(stdin);
    }

    system("cls");

    for (i = 0; i < 3; i++)
    {
        printf("%s\n: ", i + 1, disciplina[i]);

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
