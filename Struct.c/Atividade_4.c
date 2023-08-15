/*
 Descrição: Implemente um programa que leia as informações de um livro com
 os seguintes dados: Nome, Autor, Categoria, Preço.
 Armazene os dados em uma estrutura com vetor para 3 livros.
 Mostre os dados do livro.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct ficha_book
{
    char nome[250];
    char autor[250];
    char categoria[250];
    float preco;
};

int main()
{

    struct ficha_book book[3];
    int i;

    setlocale(LC_ALL, "Portuguese");

    printf("Seja Bem-Vind@ a Biblioteca de Doramal!\n");
    printf("Preencha a sua lista de Desejo:\n");
    printf("\n");

    for (i = 0; i < 3; i++)
    {

        printf("Digite o nome do livro: ");
        gets(book[i].nome);
        fflush(stdin);

        printf("Digite o nome do autor: ");
        gets(book[i].autor);
        fflush(stdin);

        printf("Digite a sua categoria: ");
        gets(book[i].categoria);
        fflush(stdin);

        printf("Digite o seu preço: ");
        scanf("%f", &book[i].preco);
        fflush(stdin);
        
        system("cls");
    }

    

    // Impressão Final para o usuário.

    printf("Aqui está sua lista!\n");
    for (i = 0; i < 3; i++)
    {
        printf("____________________________________________________________________________________\n");
        printf("Nome do Livro: %s\n", book[i].nome);
        printf("Autor: %s\n", book[i].autor);
        printf("Categoria: %s\n", book[i].categoria);
        printf("Preço: %.2f\n", book[i].preco);
        printf("\n");
    }

    printf("Obrigada por participar!\n");
    return 0;
}