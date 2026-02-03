#include <stdio.h>

/*Leia o codigo e numero de horas trabalhadas de um operario. Calcule o salario sabendo que ele ganha R$ 10 por hora.
Quando o valor exceder 50, calcular o excedente sabendo que ganha R$20 por hora.
*/


int main (){
    //variaveis
    int c;
    float n, e = 0, salario, valor_hora = 10.00;

    //entrada
    printf("Informe o codigo: ");
    scanf("%d", &c);
    printf("Informe a quantidade de horas trabalhadas: ");
    scanf("%f", &n);

    //processamento
    if (n >50){
        e = (n - 50) * 20;
        salario = (50 * valor_hora) + e;
        //saida
        printf("Salario total R$ %.2f\n", salario);
        printf("Salario excedente %.2f", e);
    }else{
        salario = n * valor_hora;
        //saida
        printf("Salario total R$ %.2f\n", salario);
        printf("Salario excendente R$ %.2f", e);
    }
}