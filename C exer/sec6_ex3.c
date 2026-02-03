#include <stdio.h>

//ler um numero e verificar se é par ou impar. Quando for par armazenar esse valor em 'p' e quando for impar em 'i'. Depois exibir 'p' e 'i'.

int main (){
    //variaeis
    int numero, p = 0, i = 0;

    //entrada
    printf("Informe um numero: ");
    scanf("%d", &numero);

    //processamento
    if (numero % 2 == 0){
        p = numero;
    }else {
        i = numero;
    }

    //saida
    printf("%d\n",numero);
    printf("%d", i);
}