#include <stdio.h>

/*Desenvolva um algoritmo que: 
a)leia 4 numeros. 
b)calcule o quadrado de cada um. 
c)se o valor total do q3 for >= 1000 imprimir 
d)caso contrario imprimir os outros valores e seus quadrados
*/

int main(){
    //variaveis
    int num1, num2, num3, num4, q1, q2, q3, q4;

    //processamento
    printf("Informe o numero 1: ");
    scanf("%d", &num1);
    printf("Informe o numero 2: ");
    scanf("%d", &num2);
    printf("Informe o numero 3: ");
    scanf("%d", &num3);
    printf("Informe o numero 4: ");
    scanf("%d", &num4);

    q1 = num1 * num1;
    q2 = num2 * num2;
    q3 = num3 * num3;
    q4 = num4 * num4;

    //saida
    if (q3 >= 1000){
        printf("%d", q3);
    }else {
        printf("Num1: %d, Quadrado: %d\n", num1, q1);
        printf("Num2: %d, Quadrado: %d\n", num2, q2);
        printf("Num3: %d, Quadrado: %d\n", num3, q3);
        printf("Num4: %d, Quadrado: %d\n", num4, q4);
    }
}