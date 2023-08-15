#include <stdio.h> 
#include <stdlib.h>
#include <locale.h> 

struct ficha_pessoa
{
    char nome[250];
    int idade;
    float peso, altura; 
};

int main(){
    setlocale(LC_ALL, "Portuguese");
    struct ficha_pessoa pessoa;

    //Solicitando  dados do usuário:  
    printf("Digite seu nome: \n");
    gets(pessoa.nome);

    printf("Digite sua idade: \n"); 
    scanf("%d", &pessoa.idade);

    printf("Digite seu peso: \n"); 
    scanf("%f", &pessoa.peso);

    printf("Digite sua altura: \n");
    scanf("%f", &pessoa.altura);

//Mostrando dados dos usuários
    printf("\nNome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Peso: %.2f\n", pessoa.peso);
    printf("Altura: %.2d\n", pessoa.altura);

    return 0;
}