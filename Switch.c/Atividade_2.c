/*Descrição: Suponha que você esteja desenvolvendo um programa para o caixa da mercearia do seu
bairro.
Esse programa deve ser capaz de somar o valor unitário de um produto do comércio
recebendo como entrada apenas o código identificador dele.
Para verificar o bom funcionamento da funcionalidade de soma de valor através do
código você decidiu realizar testes apenas com uma parte dos produtos vendidos, para
isso criou a seguinte tabela:
Desenvolva o código que será utilizado para a realização dos testes com os três produtos
selecionados.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao, quantDeter, quantiEspon, QuantiLa;
    float multiDeter, multiEspon, multiLa;

    do
    {
        printf("Seja Bem-Vind@ à Mercearia Bom Jesus!\n");
        printf("Escolha uma das principais opções mais usadas!\n");
        printf("\n");
        printf("DETERGENTE: 100\n");
        printf("ESPONJA: 101\n");
        printf("LÃ DE AÇO: 102\n");
        printf("\n");
        
        printf("Aperte '0' para SAIR!\n");

        printf("\n");
        printf("OPÇÃO:\n");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao)
        {
        case 100:
            printf("Valor do DETERGENTE: $1,59\n");
            printf("Quantos você deseja?\n");
            scanf("%d", &quantDeter);
            // Calculo dos Valores
            multiDeter = 1.59 * quantDeter;

            // Apresentando para o usuário
            system("cls");
            printf("Valor do DETERGENTE: $1,59\n");
            printf("Quantidade: %i\n", quantDeter);
            printf("Valor Total: %.2f\n", multiDeter);
            break;

        case 101:
            printf("Valor da ESPONJA: $4,59\n");
            printf("Quantos você deseja?\n");
            scanf("%d", &quantiEspon);
            // Calculo dos Valores
            multiEspon = 4.59 * quantiEspon;

            // Apresentando para o usuário
            system("cls");
            printf("Valor da ESPONJA: $4,59\n");
            printf("Quantidade: %i\n", quantiEspon);
            printf("Valor Total: %.2f\n", multiEspon);
            break;

        case 102:
            printf("Valor da LÃ DE AÇO: $1,79\n");
            printf("Quantos você deseja?\n");
            scanf("%d", &QuantiLa);
            // Calculo dos Valores
            multiLa = 1.79 * QuantiLa;

            // Apresentando para o usuário
            system("cls");
            printf("Valor da LÃ DE AÇO: $1,79\n");
            printf("Quantidade: %i\n", QuantiLa);
            printf("Valor Total: %.2f\n", multiLa);
            break;

        default:
            printf("OPÇÃO INVÁLIDA.\n");
            break;
        }

        sleep(5);
        system("cls");
    } while (opcao != 0);

    return 0;
}