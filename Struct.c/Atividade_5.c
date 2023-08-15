/*Descri��o:
Crie uma estrutura representando os alunos de um determinado
curso. A estrutura deve conter a matr�cula do aluno, nome, nota da
primeira prova, nota da segunda prova e nota da terceira prova.

(a) Permita ao usuário entrar com os dados de 5 alunos;
(b) Informe a maior nota da primeira prova;
(c) Informe a maior media geral;
(d) Informe a menor media geral;
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o
valor 6 para aprova��o.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <limits.h>

struct ficha_aluno
{
    char nome[250];
    int matricula;
    float nota[3];
    
};

int main(void)
{
    setlocale(LC_ALL, "portuguese");
    struct ficha_aluno user[5];
    float media = 0;
    int i, j;
    float maiorNota = INT_MIN, maiorMedia = INT_MIN, menorMedia = INT_MAX;

    printf("Seja Bem-Vind@ ao Fichario do Aluno do Col�gio Doramal!\n");
    printf("Preencha abaixo:\n");
    printf("\n");

    for (i = 0; i < 5; i++)
    {

        printf("Digite o nome do aluno: \n");
        gets(user[i].nome);

        fflush(stdin);

        printf("Digite o n�mero da matricula do aluno: \n");
        scanf("%d", &user[i].matricula);

        for (j = 0; j < 3; j++)
        {
            printf("Digite a %d� nota do aluno: \n", j + 1);
            scanf("%f", &user[i].nota[j]);

            // definir a media
            media += user[i].nota[j];

            //(b) definir a maior nota
            if (user[i].nota[j] > maiorNota)
            {
                maiorNota = user[i].nota[i];
            }
        }
        // (c)calcular a media geral:
        media = (media / 3);

        // Definir a maior media e menor media
        if (media > maiorMedia)
        {
            maiorMedia = media;
        }
        if (media < menorMedia)
        {
            menorMedia = media;
        }
        fflush(stdin);
        system("cls");
    }

    // Impress�o Final para Usu�rio

        printf("Obrigada por atualizar o fichario!\n");
    for (i = 0; i < 5; i++)
    {
        printf("Nome do Aluno: %s\n", user[i].nome);
        printf("Matricula: %d\n", user[i].matricula);
        printf("A Maior Nota: %.1f\n", maiorNota);
        printf("A Maior M�dia: %.1f\n", maiorMedia);
        printf("A Menor M�dia: %.1f\n", menorMedia);

        // for ( j = 0; j < 3; j++){
        // definir se foi aprovado m�dia 6
        if (media > 6)
        {
            printf("M�dia: %.2f\n", media);
            printf("APROVADO!\n\n");
        }
        else
        {
            printf("M�dia: %.2f\n", media);
            printf("REPROVADO!\n\n");
        }
    
    }
}