/*Descri��o: Suponha que voc� esteja desenvolvendo um programa para o caixa da mercearia do seu
bairro.
Esse programa deve ser capaz de somar o valor unit�rio de um produto do com�rcio
recebendo como entrada apenas o c�digo identificador dele.
Para verificar o bom funcionamento da funcionalidade de soma de valor atrav�s do
c�digo voc� decidiu realizar testes apenas com uma parte dos produtos vendidos, para
isso criou a seguinte tabela:
Desenvolva o c�digo que ser� utilizado para a realiza��o dos testes com os tr�s produtos
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
        printf("Seja Bem-Vind@ � Mercearia Bom Jesus!\n");
        printf("Escolha uma das principais op��es mais usadas!\n");
        printf("\n");
        printf("DETERGENTE: 100\n");
        printf("ESPONJA: 101\n");
        printf("L� DE A�O: 102\n");
        printf("\n");
        
        printf("Aperte '0' para SAIR!\n");

        printf("\n");
        printf("OP��O:\n");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao)
        {
        case 100:
            printf("Valor do DETERGENTE: $1,59\n");
            printf("Quantos voc� deseja?\n");
            scanf("%d", &quantDeter);
            // Calculo dos Valores
            multiDeter = 1.59 * quantDeter;

            // Apresentando para o usu�rio
            system("cls");
            printf("Valor do DETERGENTE: $1,59\n");
            printf("Quantidade: %i\n", quantDeter);
            printf("Valor Total: %.2f\n", multiDeter);
            break;

        case 101:
            printf("Valor da ESPONJA: $4,59\n");
            printf("Quantos voc� deseja?\n");
            scanf("%d", &quantiEspon);
            // Calculo dos Valores
            multiEspon = 4.59 * quantiEspon;

            // Apresentando para o usu�rio
            system("cls");
            printf("Valor da ESPONJA: $4,59\n");
            printf("Quantidade: %i\n", quantiEspon);
            printf("Valor Total: %.2f\n", multiEspon);
            break;

        case 102:
            printf("Valor da L� DE A�O: $1,79\n");
            printf("Quantos voc� deseja?\n");
            scanf("%d", &QuantiLa);
            // Calculo dos Valores
            multiLa = 1.79 * QuantiLa;

            // Apresentando para o usu�rio
            system("cls");
            printf("Valor da L� DE A�O: $1,79\n");
            printf("Quantidade: %i\n", QuantiLa);
            printf("Valor Total: %.2f\n", multiLa);
            break;

        default:
            printf("OP��O INV�LIDA.\n");
            break;
        }

        sleep(5);
        system("cls");
    } while (opcao != 0);

    return 0;
}