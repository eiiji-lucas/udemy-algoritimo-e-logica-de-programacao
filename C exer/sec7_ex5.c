#include <stdio.h>
#include <string.h>

/*Faça um programa que leia um nome de usuario e a sua senha e nao aceite a senha igual ao nome do usuario, 
mostrando a mensagem de erro caso isso acontece e voltando a pedir as informacoes
*/

int main (){
    //variaveis
    char nome[100], senha[100];

    //char 'a' ; string "asdjashdaskdj";

    //entrada
    printf("Informe o nome: ");
    gets(nome);

    printf("Informe a senha: ");
    gets(senha);

    //processamento/saida
    while (!strcmp(nome, senha)){
        printf("Nome de usuario e senha devem ser diferentes. \n");
        printf("Informe o nome: ");
        gets(nome);
        printf("Informe a senha: ");
        gets(senha);
    }
}