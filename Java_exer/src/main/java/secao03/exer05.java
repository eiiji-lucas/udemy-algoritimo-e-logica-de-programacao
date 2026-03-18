package secao03;

import java.util.Scanner;

public class exer05 {
    public static void main(String[] args) {
        //variaveis
        int metros, tamanho;
        Scanner ler = new Scanner(System.in);

        //entrada
        System.out.println("Digite o valor do metro: ");
        metros = ler.nextInt();

        //processamento
        tamanho = metros * 100;

        //saida
        System.out.println(metros + " metros em centimetros é " + tamanho);

        ler.close();
    }
}
