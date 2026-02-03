#include <stdio.h>

/*Faça um programa que carrgue um vetor com dez numeros inteiros. Calcule e mostre os numeros superiores a 50 e suas respectivas posicoes.
Mostre mensagem se nao existir nenhum numero na posicao
*/

int main (){
    //variaveis
    int vetor[10];
    char tem_maior_50 = 0;

    //processamento
    for(int i = 0; i < 10; i++){
        printf("Informe o valor para o vetor %d/10: ", (i+1));
        scanf("%d",&vetor[i]);
    }
    for(int i = 0; i < 10; i++){
        if(vetor[i] > 50){
            printf("O numero %d esta na posicao %d\n", vetor[i], i);
            tem_maior_50 = 1;
        }
    }
    if (tem_maior_50 <1){
        printf("Nao existe nenhum numero maior que 50. ");
    }
}