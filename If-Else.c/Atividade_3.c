// Descrição: Elabore um algoritmo para ler o nome de um aluno, sua idade (em anos) e as tr�s notas.
// Calcular a m�dia anual do aluno. Caso a m�dia do aluno seja menor que 7, o aluno est� reprovado.
// Imprimir: nome, idade, m�dia e se est� aprovado ou reprovado.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    char nome[250];
    int i, idade;
    float nota[3], media, soma;

    printf("Seja Bem-Vind@ ao novo sistema do Col�gio Doramal!\n");
    printf("Preencha com seus dados: \n");

    printf("Qual seu nome?\n");
    scanf("%s", &nome);

    printf("Quantos anos tem?\n");
    scanf("%d", &idade);

    // La�o de Repeti��o para ind�ce de vetor, notas
    for (i = 0; i < 3; i++)
    {
        printf("Digite sua %i� nota: \n", i+1);
        scanf("%f", &nota[i]);
        soma += nota[i];
    }

    system("cls");

    // Calculos;
    media = soma / 3;
            // If-Else para dizer a aprova��o;
            if (media > 7)
    {
        printf("APROVAD@!\n");
    }
    else
    {
        printf("REPROVAD@!\n");
    }

    // Impress�o final para o usu�rio:
    printf("M�dia: %1.f\n", media);
    printf("\n");
        printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Obrigada por participar!\n");

    return 0;
}
