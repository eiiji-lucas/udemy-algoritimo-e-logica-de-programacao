package secao06;
//Um pescador comprou um microcomputador para calcular o rendimento diario do seu trabalho.
//Quando ele pesca o excedente de 50 kilos ele precisa pagar R$ 4 por kilo.
//Faça um algoritmo onde é calculado o excedente e a multa.

import java.util.Scanner;

public class exer05 {
    public static void main(String[] args) {

    //variaveis
    float p, multa;
    String e = "excedente";
    Scanner ler = new Scanner(System.in);

    //Entradas
    System.out.println("Informe o peso dos peixes: ");
    p=ler.nextFloat();

    //processamento
        if (p < 50) {
            multa = (float)(p - 50) + (float)(4.00);
            System.out.printf("Você deverá pagar R$ %.2f em multas.", multa);
        } else {
            multa = 0;
            e = "0";
            System.out.printf("Multas: " + multa);
            System.out.printf("Excesso: " + e);
        }
    ler.close();
    }
}
