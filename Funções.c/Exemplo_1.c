//Descri�?o: calcularSoma

#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

void calcularSoma(int numeroUm, int numeroDois)
{
    int soma;
    soma = numeroUm + numeroDois;
    printf("Soma: %d\n", soma); 
}

int main(){
    setlocale(LC_ALL, "portuguese");
    int primeirNumero, segundaNumero; 
    
    printf("Digite seu 1� n�mero: ");
    scanf("%d", &primeirNumero);

    printf("Digite seu 2� n�mero: ");
    scanf("%d", &segundaNumero);

    calcularSoma(primeirNumero, segundaNumero);

    return 0;
}