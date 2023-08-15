// Descrição: Elabore um algoritmo para receber o login e a senha de um usuário.
// Caso o usuário e a senha estejam corretos, mostre a mensagem "Bem-vindo!",
// caso contrário, mostre a mensagem "Login ou senha inválidos."

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    char loginArmaz[250], senhaArmaz[250], loginSalvo[250], senhaSalvo[250];

    printf("Olá, bem-vind@ ao servidor da Prefeitura de Doramal!\n");
    printf("Vamos realizar seu cadastro:\n");

    // Armazenamento de Login e Senha:
    printf("Digite seu login ideal: \n");
    gets(loginArmaz);

    printf("Digite sua senha ideal: \n");
    gets(senhaArmaz);

    system("cls");

    // Verificação de Login e Senha:
    printf("Entre!\n");
    printf("");

    printf("Login: \n");
    gets(loginSalvo);

    printf("Senha: \n");
    gets(senhaSalvo);

    system("cls");

    // If-Else para verificar igualdade de login e senha:
    if (strcmp(loginArmaz, loginSalvo) == 0 && strcmp(senhaArmaz, senhaSalvo) == 0)
    {
        printf("Seja Bem-Vind@, 1° Usuário: \n");
    }
    else
    {
        printf("Senha ou Login incorreto, tente novamente!\n");
    }

    return 0;
}
