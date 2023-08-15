// Descri��o: Implemente um programa que leia o nome, a idade e o endere�o de
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

    printf("Seja Bem-Vind@ a adi��o de endere�o do aluno do Col�gio Doramal!\n");
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

    // Impress�o Final para o usu�rio
    printf("____________________________________________________________________________________\n");
    printf("Nome: %s\n", user.nome);
    printf("Idade: %d\n", user.idade);
    printf("Endereco: %s\n", user.endereco);
    printf("Obrigada por atualizar!\n");

    return 0;
}