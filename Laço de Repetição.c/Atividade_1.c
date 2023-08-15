//Escreva um algoritmo que pergunte ao usu�rio se deseja inserir
//mais uma nota, se a resposta do usu�rio for "N�O", o programa
//far� a m�dia aritmetica das notas informadas e mostrar� a m�dia
//aritmetica para o usu�rio.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h> 

int main()
{
    setlocale(LC_ALL, "");
    int cont = 0;
    float soma, media, nota;
    char resposta[250];

    printf("Seja Bem-Vind@, preencha com seus dados!\n");

    do
    {
        printf("Deseja adicionar uma nota? Responda com 'sim' ou 'n�o': ");
        gets(resposta);
        if (strcmp(resposta, "nao") == 0)
        {
            printf("Obrigada por Participar! \n");
            system("cls");
        }
        else
        {
            fflush(stdin);
            printf("Digite sua nota: \n");
            scanf("%f", &nota);

            // M�dia Aritm�tica:
            soma = soma + nota;
            cont = cont + 1;
            media = soma / cont;
        }
    } while (strcmp(resposta, "nao") != 0);


    // Impress�o Final para o usu�rio
    printf("M�dia: %.1f \n", media);


    printf("Obrigada por Participar! \n");
}