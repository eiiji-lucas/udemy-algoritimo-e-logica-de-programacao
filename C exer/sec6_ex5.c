#include <stdio.h>

/*Um pescador comprou um microcomputador para calcular o rendimento diario do seu trabalho. 
Quando ele pesca o excente de 50 kilos ele precisa pagar R$ 4 por kilo.
Faça um algoritmo onde é calculado o excedente e a multa.
*/

int main (){
    //variaveis
    float peso, multa;
    char e[8] = "excesso";   // '/0'
    
    //entrada
    printf("Informe o peso: ");
    scanf("%f", &peso);

    //processamento
    if (peso > 50){
        multa = (peso - 50) * 4;
        //saida
        printf("Voce devera pagar R$ %.2f em multas.", multa);
    }else {
        multa = 0;
        e[0] = 0;
        //saida
        printf("Multas: %.2f\n", multa);
        printf("Excesso: %d", e[0]);

    }   
}