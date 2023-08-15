//Escreva um algoritmo que pergunte ao usuário se deseja inserir
//mais uma nota, se a resposta do usuário for "NÃO", o programa
//fará a média aritmetica das notas informadas e mostrará a média
//aritmetica para o usuário.

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
        printf("Deseja adicionar uma nota? Responda com 'sim' ou 'não': ");
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

            // Mï¿½dia Aritmï¿½tica:
            soma = soma + nota;
            cont = cont + 1;
            media = soma / cont;
        }
    } while (strcmp(resposta, "nao") != 0);


    // Impressï¿½o Final para o usuï¿½rio
    printf("Média: %.1f \n", media);


    printf("Obrigada por Participar! \n");
}