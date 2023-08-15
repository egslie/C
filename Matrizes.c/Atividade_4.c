// Descrição: • Crie um algoritmo que receba:
//- o nome de três bandas musicais;
//- e cinco integrantes para cada banda.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int i, j;
    char banda[3][250], pessoas[3][5][250];

    printf("Seja Bem-Vind@ a Inscrição do Show de Talentos da Prefeitura de Doramal!\n");
    printf("Os vencendores iram cantar na festa de São João!\n");
    printf("Preencha de acordo com os requisitos:\n");

    for (i = 0; i < 3; i++)
    {
        printf("Digite qual banda está se registrando?\n", i + 1);
        gets(banda[i]);

        for (i = 0; i < 5; i++)
        {
            printf("Digite sua %i° integrante da banda %s: \n", j + 1);
            gets(pessoas[i][j]);
        }
    }

    system("cls");

    for (i = 0; i < 3; i++)
    {
        printf("%i° Banda: %s\n", i + 1, banda[i]);

        for (i = 0; i < 5; i++)
        {
            printf("%i° Integrante: %s\n", j + 1, pessoas[i]);
        }
    }

    // fim
    printf("__________________________________________________________________________");
    printf("Obrigada por participar!\n");
    return 0;
}