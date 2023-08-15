// Descrição: Implemente um programa que leia o nome, a idade e o endereço de
// uma pessoa e armazene os dados em uma estrutura.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct ficha_aluno
{

    char nome[250];
    int idade;
    char endereco[100];
};

int main()
{

    setlocale(LC_ALL, "");
    struct ficha_aluno user;

    printf("Seja Bem-Vind@ a adição de endereço do aluno do Colégio Doramal!\n");
    printf("Preencha abaixo:\n");
    printf("\n");

    printf("Digite o nome: \n");
    gets(user.nome);
    fflush(stdin);

    printf("Digite a idade: \n");
    scanf("%d", &user.idade);
    fflush(stdin);

    printf("Digite o endereco: \n");
    gets(user.endereco);
    fflush(stdin);

    system("cls");

    // Impressão Final para o usuário
    printf("____________________________________________________________________________________\n");
    printf("Nome: %s\n", user.nome);
    printf("Idade: %d\n", user.idade);
    printf("Endereco: %s\n", user.endereco);
    printf("Obrigada por atualizar!\n");

    return 0;
}