#include <stdio.h>

//contrua um algoritmo que calcule seu peso ideial

int main (){
    //variaveis
    float altura, peso_ideial;

    //entrada
    printf("Informe a sua altura: ");
    scanf("%f", &altura);

    //processamento
    peso_ideial = (altura * 72.7) - 58;

    //saida
    printf("Seu peso ideal e %.2f", peso_ideial);
}