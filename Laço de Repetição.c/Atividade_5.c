// Descri��o: A prefeitura de uma cidade fez uma pesquisa entre seus habitantes,
// coletando dados sobre o sal�rio e n�mero de filhos. A prefeitura
// deseja saber:
// a) total de fam�lias que responderam a pesquisa;
// b) m�dia do sal�rio da popula��o;
// c) m�dia do n�mero de filhos;
// O final da leitura de dados se dar� com a entrada de um sal�rio negativo.

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
        printf("Quanto voc� ganha no seu sal�rio? \n");
        scanf("%f", &salario);

        if (salario >= 0)
        {
            printf("Voc� tem filhos?\n");
            gets(resposta);

            if (strcmp(resposta, "sim") == 0)
            {
                printf("Quantos filhos voc� tem? \n");
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
                printf("Voc� n�o � apto para a pesquisa!\n");
            }
            
        }

    } while (salario >= 0);

    // Medias:
    mediaFilho = somaFilho / cont;
    mediaSalario = somaSalario / cont;

    // Impress�o Final para o usu�rio;
    printf("__________________________________________________________________________");
    printf("Total de Fam�lias que responderam: %d.1\n", cont);
    printf("M�dia Salarial das Fam�lias: %f.2\n", mediaSalario);
    printf("Media de Filhos das Fam�lias: %f.2\n", mediaFilho);
    printf("__________________________________________________________________________");
    printf("Obrigada por participar!\n");
}