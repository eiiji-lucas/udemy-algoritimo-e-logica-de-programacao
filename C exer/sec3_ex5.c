#include <stdio.h>

//faça um algoritmo que converta metros para centimetros

int main(){
    //variaveis
    int metros, centimetros;

    //entrada
    printf("Informe o o valor em metros: ");
    scanf("%d", &metros);

    //processamento
    centimetros = (metros * 100);

    //saida
    printf("%d metros em centimetros e %d", metros, centimetros);

}