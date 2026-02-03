#include <stdio.h>

//elabore um algoritmo que leia um numero. Se esse numero for positivo armazene-o em 'a', se for negativo em 'b'. No final mostrar resultado

int main (){
    //variaveis
    int n, a, b;

    //entrada
    printf("Informe um numero ");
    scanf("%d", &n);

    //processamento
    if (n > 0){
        a = n;
        printf("O numero %d e valor positivo", n);
    }else{
        b = n;
        printf("O numero %d e valor negativo", n);
    }   
}