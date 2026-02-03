#include <stdio.h>

//Escreva um algoritmo que leia e mostre um vetor de 20 elementos inteiros, em seguida, mostre a soma de todos os elementos

int main(){
    //variaveis
    int vetor[20], soma = 0;
    //processamento
    for(int i = 0; i < 20; i++){
        printf("Informe um valor para o vetor %d/20: ", (i+1));
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }
    //saida
    printf("Soma: %d", soma);
}