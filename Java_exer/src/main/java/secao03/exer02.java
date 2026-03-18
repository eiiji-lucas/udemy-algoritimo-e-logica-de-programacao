package secao03;

import java.util.Scanner;

//Faça um algoritmo para calcular o estoque médio de uma peça

public class exer02 {
    public static void main(String[] args){
        //variaveis
        int quantidade_minima, quantidade_maxima, estoque_medio;
        Scanner teclado = new Scanner(System.in);

        //entradas
        System.out.println("Informe a quantidade minima: ");
        quantidade_minima = teclado.nextInt();

        System.out.println("Informe a quantidade maxima: ");
        quantidade_maxima = teclado.nextInt();

        //processamento
        estoque_medio = quantidade_maxima + quantidade_minima / 2;
        System.out.println("Estoque médio é: " + estoque_medio);

        teclado.close();
    }
}

