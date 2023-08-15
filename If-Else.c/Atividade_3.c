// DescriÃ§Ã£o: Elabore um algoritmo para ler o nome de um aluno, sua idade (em anos) e as trï¿½s notas.
// Calcular a mï¿½dia anual do aluno. Caso a mï¿½dia do aluno seja menor que 7, o aluno estï¿½ reprovado.
// Imprimir: nome, idade, mï¿½dia e se estï¿½ aprovado ou reprovado.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    char nome[250];
    int i, idade;
    float nota[3], media, soma;

    printf("Seja Bem-Vind@ ao novo sistema do Colégio Doramal!\n");
    printf("Preencha com seus dados: \n");

    printf("Qual seu nome?\n");
    scanf("%s", &nome);

    printf("Quantos anos tem?\n");
    scanf("%d", &idade);

    // Laï¿½o de Repetiï¿½ï¿½o para indï¿½ce de vetor, notas
    for (i = 0; i < 3; i++)
    {
        printf("Digite sua %i° nota: \n", i+1);
        scanf("%f", &nota[i]);
        soma += nota[i];
    }

    system("cls");

    // Calculos;
    media = soma / 3;
            // If-Else para dizer a aprovaï¿½ï¿½o;
            if (media > 7)
    {
        printf("APROVAD@!\n");
    }
    else
    {
        printf("REPROVAD@!\n");
    }

    // Impressï¿½o final para o usuï¿½rio:
    printf("Média: %1.f\n", media);
    printf("\n");
        printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Obrigada por participar!\n");

    return 0;
}
