// Descri��o: Fa�a um algoritmo que leia uma quantidade não
// determinada de n�meros positivos. Calcule:
// a) quantidade de n�meros pares e impares;
// b) m�dia de valores pares
// O n�mero que encerrar� a leitura ser� zero.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "");
    int numeros, somaPar, contPar, contImpar;
    float mediaPar;

    printf("Seja Bem-Vind@ a verifica��o de n�meros impares e pares, do Colegio Doramal! \n");

    do
    {
        printf("Digite seu n�mero: \n");
        scanf("%d", &numeros);

        fflush(stdin);

        if (numeros != 0)
        {
            if (numeros % 2 == 0)
            {
                somaPar += somaPar;
                contPar++;
            }
            else
            {
                contImpar++;
            }
        }
        system("cls");

    } while (numeros != 0);

    // Calculo da M�dia:
    mediaPar = somaPar / contPar;

    // Impress�o Final para o usu�rio;
    printf("__________________________________________________________________________");
    printf("A quantidade de n�meros PARES: %.1d\n", contPar);
    printf("A quantidade de n�meros IMPARES: %.1d\n", contImpar);
    printf("A m�dia dos n�meros PARES: %.2f\n", mediaPar);
    printf("__________________________________________________________________________");
    printf("Obrigada por participar!\n");

    //fim 
    return 0;
}
