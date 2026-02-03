#include <stdio.h>

//Elabore um programa que gera e escreve os numeros impares dos numeros entre 100 e 200

//processamento
int main (){
    for (int i = 100; i <= 200; i ++){
        if (i % 2 != 0 ){
            printf ("%d\n", i);
        }
    }
}
