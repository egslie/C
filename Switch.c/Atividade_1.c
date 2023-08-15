/*Descrição: Desenvolva um programa que receba como entrada um número inteiro  que represente um dos 7 dias da semana e imprima na tela se esse dia  é útil, final de semana ou inválido.
Considere que Domingo � o dia 1 e S�bado o dia 7.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int dia;

    setlocale(LC_ALL, "Portuguese");

    printf("Seja Bem-Vind@ a analise de semanas do Col�gio Doramal!\n");
    printf("Digite um numero para o dia da semana:\n");
    scanf("%d", &dia);

    switch (dia)
    {
    case 7:
        printf("S�bado: Estudar at� 14h!");
        break;
    case 1:
        printf("Domingo: Final de semana.");
        break;
    case 2:
        printf("Segunda-Feira: Na escola at� �s 17h!");
        break;
    case 3:
        printf("Ter�a-Feira: Na escola at� �s 17h!");
        break;
    case 4:
        printf("Quarta-Feira: Na escola at� �s 17h!");
        break;
    case 5:
        printf("Quinta-Feira: Na escola at� �s 17h!");
        break;
    case 6:
        printf("Sexta-Feira: Dia util, por�m de Folga! :)");
        break;
    default:
        printf("Dia invalido.");
    }
    return 0;
}