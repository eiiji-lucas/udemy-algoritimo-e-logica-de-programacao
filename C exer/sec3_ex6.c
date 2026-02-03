#include <stdio.h>

/*faça um algoritmo que pergunte quanto você ganha por hora e o número de horas trabalhadas por mês. 
Calcule e mostre o total do seu salário no referido mês
*/

int main (){
    //variaveis
    int horas;
    float valor, total;

    //entradas
    printf("Quantas horas voce trabalhou esse mes? ");
    scanf("%d", &horas);

    printf("Quanto voce ganha por hora? ");
    scanf("%f", &valor);

    //processamento
    total = horas * valor;

    //saida
    printf("Neste mes voce vai receber R$ %.2f", total);
}

