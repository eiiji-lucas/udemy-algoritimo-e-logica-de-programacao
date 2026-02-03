#include <stdio.h>

/*Faça um programa que receba um codigo numerico inteiro e um vetor de cinco posicoes de numeros reais.
Se o codigo for 0, termine o programa. Se o codigo for 1, mostre o vetor na ordem direta. Se o codigo for 2 mostre na ordem inversa.
*/

int main(){
    //variaveis
    float vetor[5];
    int codigo;

    //entradas 
    printf("Informe o codigo; ");
    scanf("%d", &codigo);

    //processamento
    if (codigo != 0){
        for(int i = 0; i < 5; i++){
            printf("Informe um numero real: ");
            scanf("%f", &vetor[i]);
        }
        if(codigo == 1){
            for(int i = 0; i < 5; i++){
                printf("%.2f\n", vetor[i]);
            }
        }
        if(codigo == 2){
            for(int i = 4; i >= 0; i--){        //4 pq termina o vetor no 4 pq comeca no 0
                printf("%.2f\n", vetor[i]);
            }
        }
    }
    
    

}