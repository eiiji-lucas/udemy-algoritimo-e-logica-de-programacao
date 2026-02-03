#include <stdio.h>

//Algoritmo que dada a idade do nadador é classificado em uma categoria

int main (){
    //variaveis
    int idade;
    
    //entrada
    printf("Informe sua idade: ");
    scanf("%d", &idade);

    //processamento
    if (idade >= 5 && idade <= 7 ){
        printf("Voce e da categoria Infantil A. ");
    }else if(idade >= 8 && idade <= 11){
        printf("Voce e da categoria Infantil B. ");
    }else if(idade >= 12 && idade <= 13){
        printf("Voce e da categoria Juvenil A. ");
    }else if(idade >= 14 && idade <= 17){
        printf("Voce e da categoria Juvenil B. ");
    }else if(idade >= 18){
        printf("Voce e da categoria Adulto. ");
    }
}