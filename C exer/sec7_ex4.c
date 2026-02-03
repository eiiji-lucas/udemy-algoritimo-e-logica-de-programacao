#include <stdio.h>

/*Construa um algoritmo que leia 10 numeros inteiros e positovos e:
a)Encontre o maior numero
b)Encontre o menor numero
c)Calcule a media dos numeros lidos
*/

int main (){
    //variaveis
    int valor, soma = 0, maior = -9999, menor = 9999;
    float media;

    //processamento
    for (int i = 0; i < 10; i++){
        printf("Informe um valor: ");
        scanf("%d", &valor);

        if(valor > 0){
            if(valor > maior){
                maior = valor;
            }
            if (valor < menor){
                menor = valor;
            }
            soma = soma + valor;
        }else{
            i--;
        }   
    }
    media = soma/10;
    //saida
    printf("O maior numero e %d\n", maior);
    printf("O menor numero e %d\n", menor);
    printf("A media dos numeros e %2.f\n", media);
}