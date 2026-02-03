#include <stdio.h>

//ler uma variavel numerica 'n' e imprimi-la somente se a mesma for maior que 100, caso contrario imprimi-la com o valor 0 

int main (){
    //variaveis
    int n;

    //entrada
    printf("Informe um numero: ");
    scanf("%d", &n);

    //processamento
    if (n > 100){
        printf("%d", n);
    }else{
        n = 0;
        printf("%d", n);
    }
}