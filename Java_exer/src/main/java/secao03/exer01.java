package secao03;

import java.util.Scanner;

//faça um algoritmo para calcular o estoque medio de um peça

public class exer01 {
    public static void main(String[] args){
        //Variaveis
        int quantidade_minima, quantidade_maxima;
        float estoque_medio;
        Scanner teclado = new Scanner(System.in);

        //entradas
        System.out.println("Informe a quantidade minima: ");
        quantidade_minima = teclado.nextInt();

        System.out.println("Informe a quantidade maxima: ");
        quantidade_maxima = teclado.nextInt();

        //processamento
        estoque_medio = (quantidade_maxima + quantidade_minima) / 2;

        //saida
        System.out.println("O estoque medio é " + estoque_medio);

        teclado.close();
    }
}
