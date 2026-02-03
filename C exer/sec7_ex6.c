#include <stdio.h>

//Desenvolva um gerador de tabuadas capaz de calcular qualquer numero inteiro de 1 a 10

int main(){
    //variaveis
    int numero;
    
    printf("Informe um numero entre 1 a 10: ");
    scanf("%d", &numero);
    //processamento
    while(numero < 1 || numero > 10){
        printf("Informe um numero entre 1 a 10: ");
        scanf("%d", &numero);
    }
    for(int i = 1; i <=10; i++){
        printf("%d X %d = %d\n", numero, i, (numero * i));
    }
}