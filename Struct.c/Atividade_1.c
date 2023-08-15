/* Descri��o: Crie um programa usando Struct com as informa��e abaixo: Idade, Peso, Altura
Mostre os dados do usu�rio.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct ficha_aluno
{
    char nome[250];
    int idade;
    float peso, altura;
};

int main()
{
    setlocale(LC_ALL, "");
    struct ficha_aluno aluno;

    printf("Seja Bem-Vind@ ao ficha do aluno do Col�gio Doramal!\n");
    printf("Preencha com os dados do aluno:\n");
    printf("\n");

    printf("Digite o seu nome: \n");
    gets(aluno.nome);

    printf("Digite a sua idade:\n");
    scanf("%d", &aluno.idade);

    printf("Digite o seu peso:\n");
    scanf("%f", &aluno.peso);

    printf("Digite a sua altura:\n");
    scanf("%f", &aluno.altura);

    system("cls");

    // Impress�o Final para o usu�rio.

    printf("____________________________________________________________________________________\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Peso: %.2f\n", aluno.peso);
    printf("Altura: %.1f\n", aluno.altura);
    printf("Obrigada por atualizar!\n");

    return 0;
}
