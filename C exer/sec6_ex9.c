#include <stdio.h>

/*A Secretaria de Meio Ambiente que controla o índice de poluição mantém 3
grupos de indústrias que são altamente poluentes do meio ambiente. O índice de
poluição aceitável varia de 0,05 até 0,25. Se o índice sobe para 0,3 as indústrias
do 1o grupo são intimadas a suspenderem suas atividades, se o índice crescer para 0,4
as industrias do 1o e 2o grupo são intimadas a suspenderem suas atividades, se o índice
atingir 0,5 todos os grupos devem ser notificados a paralisarem suas atividades.
Faça um algoritmo que leia o índice de poluição medido e emita a notificação adequada aos diferentes
grupos de empresas.
*/

int main (){
    //variaveis
    float indice;

    //entrada
    printf("Informe o indice de poluicao: ");
    scanf("%f", &indice);
    
    //processamento
    if (indice >= 0.3 && indice < 0.4){
        printf("Atencao: Industrias do 1o grupo devem suspender as atividades.");
    }else if(indice >= 0.4 && indice < 0.5){
        printf("Atencao: Industrias do 1o e 2o grupos devem suspender as atividades. ");
    }else if (indice >= 0.5){
        printf("Atencao: Todos os grupos devem suspender as atividades. ");
    }
}