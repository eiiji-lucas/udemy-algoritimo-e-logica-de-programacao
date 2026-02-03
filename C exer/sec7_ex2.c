#include <stdio.h>

//Faça um algoritmo que conte de 1 a 100 e a cada multiplo de 10 emita um mensagem 'multiplo de 10'

int main (){
    for (int i = 1; i <= 100; i++){
        printf ("%d\n", i);
        if (i % 10 == 0){
            printf ("Multiplo de 10");
        }
    }    
}