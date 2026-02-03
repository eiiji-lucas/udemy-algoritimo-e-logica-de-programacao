#include <stdio.h>

/*A empresa contratou um estagiário para avaliar cerca de 200 mouses encontrados na sucata, registrando o estado de cada um. 
Você deve criar um programa que receba repetidamente o ID do mouse e o tipo de defeito (esfera, limpeza, cabo/conector ou quebrado). 
O processo termina quando o ID informado for zero.
Ao final, o programa deve gerar um relatório com a quantidade total de mouses e o percentual de cada tipo de defeito.
*/

int main (){
    //variaveis
    int contador_total = 0, contador_sit_1 = 0, contador_sit_2 = 0, contador_sit_3 = 0, contador_sit_4 = 0, indentificacao, defeito;

    //entrada
    printf("Informe a indentificacao: ");
    scanf("%d", &indentificacao);

    while (indentificacao != 0){
        printf("1 - Necessita de esfera. \n");
        printf("2 - Necessita de limpeza. \n");
        printf("3 - Necessita de troca do cabo ou conector. \n");
        printf("4 - Quebrado ou inutilizado. \n");
        printf("Informe o tipo de defeito: ");
        scanf("%d", &defeito);
        //processamento

        if (defeito == 1)
        {
            contador_sit_1 = contador_sit_1 + 1;
        }if (defeito == 2)
        {
            contador_sit_2 = contador_sit_2 + 1;
        }if (defeito == 3)
        {
            contador_sit_3 = contador_sit_3 + 1;
        }if (defeito == 4)
        {
            contador_sit_4 = contador_sit_4 + 1;
        }
        contador_total = contador_total + 1;

        printf("Informe a indentificacao: ");
        scanf("%d", &indentificacao);
    }
    float p1, p2, p3, p4; //float cast
    p1 = ((float)contador_sit_1 / (float)contador_total * 100.0);
    p2 = ((float)contador_sit_2 / (float)contador_total * 100.0);
    p3 = ((float)contador_sit_3 / (float)contador_total * 100.0);
    p4 = ((float)contador_sit_4 / (float)contador_total * 100.0);

    //saida
    printf("Quantidade de mouses %d\n\n", contador_total);
    printf("Situacao \t\t\t Quantidade \t Percentual \n");
    printf("1-Necessita de esfera \t\t\t%d\t%.2f %%\n",contador_sit_1);
    printf("2-Necessita de limpeza \t\t\t%d\t%.2f %%\n",contador_sit_2);
    printf("3-Necessita troca de cabo ou conector \t%d\t%.2f %%\n",contador_sit_3);
    printf("4-Quebrado ou inutilizado \t\t%d\t%.2f %%\n",contador_sit_4);
}
