#include <stdio.h>

//Faça um algoritmo que carregue um valor de 5 elementos inteiros e em seguida armazene em um vetor apenas os numeros pares maiores que 0. 

int main (){
    //variaveis
    int vetor[5], pares[5], cont_p = 0;

    //processamento
    for(int i = 0; i < 5; i++){
        printf("Informe um valor para o vetor: ");
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0){
            if(vetor[i] > 0){
                pares[cont_p] = vetor[i];
                cont_p = cont_p + 1;
            }
        }
    }

    //saida
    for(int i = 0; i < cont_p; i++){
        printf("%d\n", pares[i]);
    }
}