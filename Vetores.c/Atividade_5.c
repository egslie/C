// Descrição: Crie um algoritmo que leia o nome e a idade de 5 pessoas,
// armazenando em vetores.
//- Liste o nome e a idade de cada pessoa.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    int i, idade[5];
    char nome[5][250];

    printf("Seja Bem-Vind@ a lista de parceir@s para a festa junina do Colégio Doramal!\n");
    printf("Preencha com os dados que quiser: \n");

    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome da %i° pessoa: \n", i + 1);
        gets(nome[i]);

        printf("Digite a idade da %i° pessoa: \n", i + 1);
        scanf("%d", &idade[i]);

        fflush(stdin);
    }

    system("cls");

    // Impressão Final para o usuário:
    for (i = 0; i < 5; i++)
    {
        printf("%i° Pessoa: %s\n", nome[i], i + 1);
        printf("Idade da %i° Pessoa: %d\n", idade[i], i + 1);
        printf("\n");
    }
}