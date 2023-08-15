/*DescriÃ§Ã£o: Desenvolva um programa que receba como entrada um nÃºmero inteiro  que represente um dos 7 dias da semana e imprima na tela se esse dia  Ã© Ãºtil, final de semana ou invÃ¡lido.
Considere que Domingo ï¿½ o dia 1 e Sï¿½bado o dia 7.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int dia;

    setlocale(LC_ALL, "Portuguese");

    printf("Seja Bem-Vind@ a analise de semanas do Colégio Doramal!\n");
    printf("Digite um numero para o dia da semana:\n");
    scanf("%d", &dia);

    switch (dia)
    {
    case 7:
        printf("Sábado: Estudar até 14h!");
        break;
    case 1:
        printf("Domingo: Final de semana.");
        break;
    case 2:
        printf("Segunda-Feira: Na escola até ás 17h!");
        break;
    case 3:
        printf("Terï¿½a-Feira: Na escola até ás 17h!");
        break;
    case 4:
        printf("Quarta-Feira: Na escola até ás 17h!");
        break;
    case 5:
        printf("Quinta-Feira: Na escola até ás 17h!");
        break;
    case 6:
        printf("Sexta-Feira: Dia util, porém de Folga! :)");
        break;
    default:
        printf("Dia invalido.");
    }
    return 0;
}