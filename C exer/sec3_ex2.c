#include <stdio.h>

//faça um algoritmo para calcular o estoque medio de um peça

int main (){
    //variaveis
    int quantidade_maxima, quantidade_minima;
    float estoque_medio;

    //entrada
    printf("Informe a quantidade maxima: ");
    scanf("%d", &quantidade_maxima);

    printf("Informe a quantidade minima: ");
    scanf("%d", &quantidade_minima);

    //processamento
    estoque_medio = (quantidade_maxima + quantidade_minima) / 2;

    //saida
    printf("O estoque medio e %.2f", estoque_medio);
}