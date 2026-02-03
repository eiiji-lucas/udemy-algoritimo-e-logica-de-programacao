#include <stdio.h>

/*Escreva um algoritmo que leia dois vetores de 10 posicoes e 
faça a soma dos elementos do mesmo indice, colocando o resultado em um terceiro vetor
*/

int main(){
    //variaveis
    int vetor1[10], vetor2[10], soma[10];
    //processamento
    for(int i = 0; i < 10; i++){
        printf("Informe o primeiro numero do vetor: ");
        scanf("%d", &vetor1[i]);
        printf("Informe o segundo numero do vetor: ");
        scanf("%d", &vetor2[i]);
        soma[i] = vetor1[i] + vetor2[i];
    }
    //saida
    for(int i = 0; i < 10; i++){
        printf("%d\n", soma[i]);
    }
}