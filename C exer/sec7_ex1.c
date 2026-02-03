#include <stdio.h>

//Faça um algoritmo que determine o maior entre N numeros. A condição de parada é entrada de um valor 0, ate isso acontecer fica em loop.

int main (){
    //variaveis
    int n, maior = 0;

    //entrada
    printf("Informe um numero: ");
    scanf("%d", &n);

    //processamento
    while(n !=0){
        if(n > maior){
            maior = n;
        }
        printf ("Informe um numero: ");
        scanf("%d", &n);
    }
    //saida
    printf ("O maior numero e %d", maior);
}