#include <stdio.h>
#include <ctype.h>

//Receba altura e sexo da pessoa e construa um algoritmo onde é calculado o peso ideal da pessoa. Tanto homem como mulher.

int main (){
    //variaveis
    char sexo;
    float peso_ideal, altura;

    //entradas
    printf("Informe seu sexo m/f: ");
    scanf("%c", &sexo);
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    //gets(stdin);
    
    //processamento
    if (tolower(sexo) == 'm'){    
        peso_ideal = (72.7 * altura) - 58;
        printf("Seu peso ideiel e %.2f", peso_ideal);
    }
    if (tolower(sexo) == 'f'){
        peso_ideal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal e %.2f", peso_ideal);
    }
    if (tolower(sexo) != 'm' && tolower(sexo) != 'f'){
        printf("Sexo nao reconhecido. \n");
    }
}