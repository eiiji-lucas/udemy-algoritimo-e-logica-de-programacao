package secao06;

//Entradas de dados de altura e sexo de uma pessoa, calcule o peso ideal, para :
//homens: (72.7 * altura) - 58
//mulheres: (62.1 * altura) - 44.7

import java.util.Scanner;

public class exer04 {
    public static void main(String[] args) {

    //variaveis
    float altura, peso_ideal;
    char sexo;
    Scanner ler = new Scanner(System.in);

    //entrada
    System.out.println("Informe sua altura: ");
    altura = ler.nextFloat();

    System.out.println("Informe sua sexo m/f: ");
    sexo = ler.next().charAt(0);

    //processamento
    if (sexo == 'm') {
        peso_ideal = (float)(altura * 72.7) - 58;
        System.out.println("Peso ideal: " + peso_ideal);
    }
    if(sexo == 'f') {
        peso_ideal = (float)(altura * 62.1) - (float)44.7;
        System.out.println("Peso ideal: " + peso_ideal);
    }
    if(sexo != 'm' && sexo != 'f') {
        System.out.println("Sexo não reconhecido");
        peso_ideal = 0;
    }
}
}
