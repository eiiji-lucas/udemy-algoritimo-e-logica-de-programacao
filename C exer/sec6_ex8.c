#include <stdio.h>

/*Faça um algoritmo que leia um numero inteiro 
mostre uma mensagem indicando se este numero é par ou impar, e se é positivo ou negativo
*/

int main (){
    int n;

    //variaveis
    printf("Informe um numero: ");
    scanf("%d", &n);

    //processamento
    if (n % 2 == 0){
        if (n > 0){
            //saida
            printf("O numero %d e par e positivo", n);
        }else {
            printf("O numero %d e impar e negativo", n);
        }
    }else{
        if (n < 0){
            //saida
            printf("O numero %d e impar e positivo", n);
        }else{
            printf("O numero %d e impar e negativo", n);
        }
    }
}