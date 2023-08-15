// Descrição: A prefeitura de uma cidade fez uma pesquisa entre seus habitantes,
// coletando dados sobre o salário e número de filhos. A prefeitura
// deseja saber:
// a) total de famí­lias que responderam a pesquisa;
// b) média do salário da população;
// c) média do número de filhos;
// O final da leitura de dados se dará com a entrada de um salário negativo.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    float filho = 0, salario = 0, somaFilho = 0, somaSalario = 0, mediaFilho = 0, mediaSalario = 0;
    int cont = 0;
    char resposta[250];

        printf("Seja Bem-Vind@ a Pesquisa Anual da Prefeitura de Doramal!\n");
    printf("Preencha com seus dados: \n");

    do
    {
        printf("Quanto você ganha no seu salário? \n");
        scanf("%f", &salario);

        if (salario >= 0)
        {
            printf("Você tem filhos?\n");
            gets(resposta);

            if (strcmp(resposta, "sim") == 0)
            {
                printf("Quantos filhos você tem? \n");
                scanf("%f", &filho);

                fflush(stdin);
                system("cls");

                // Calculos:
                somaFilho += filho;
                somaSalario += salario;
                cont++;
            }
            else
            {
                printf("Você não é apto para a pesquisa!\n");
            }
            
        }

    } while (salario >= 0);

    // Medias:
    mediaFilho = somaFilho / cont;
    mediaSalario = somaSalario / cont;

    // Impressão Final para o usuário;
    printf("__________________________________________________________________________");
    printf("Total de Famílias que responderam: %d.1\n", cont);
    printf("Média Salarial das Famílias: %f.2\n", mediaSalario);
    printf("Media de Filhos das Famílias: %f.2\n", mediaFilho);
    printf("__________________________________________________________________________");
    printf("Obrigada por participar!\n");
}