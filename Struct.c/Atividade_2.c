/* Descrição: Crie um programa usando Struct com as informações abaixo:
 = Nome
 = Idade
 = Peso
 = Altura

Utilize os dados informados para solicitar estas informações de 5 usuários.
 = Utilize vetor.
 = Mostre os dados do usuÃ¡rio.
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

    setlocale(LC_ALL, "Portuguese");

    struct ficha_aluno user[5];
    int i;

    printf("Seja Bem-Vind@ ao ficha do aluno do Colégio Doramal!\n");
    printf("Preencha com os dados do aluno:\n");
    printf("\n");

    for (i = 0; i < 5; i++)
    {

        printf("Digite o nome do alun@: \n");
        gets(user[i].nome);
        fflush(stdin);

        printf("Digite a idade do alun@: \n");
        scanf("%d", &user[i].idade);
        fflush(stdin);

        printf("Digite o peso do alun@: \n");
        scanf("%f", &user[i].peso);
        fflush(stdin);

        printf("Digite a altura do alun@: \n");
        scanf("%f", &user[i].altura);
        fflush(stdin);

        system("cls");
    }

    printf("Aqui está sua lista!\n");
    for (i = 0; i < 5; i++)
    {
        printf("____________________________________________________________________________________\n");
        printf("Nome do Alun@: %s\n", user[i].nome);
        printf("Idade do Alun@: %d\n", user[i].idade);
        printf("Peso do Alun@: %.2f\n", user[i].peso);
        printf("Altura do Alun@: %.1f\n", user[i].altura);

        printf("\n");
    }
    printf("Obrigada por participar!\n");
    return 0;
}