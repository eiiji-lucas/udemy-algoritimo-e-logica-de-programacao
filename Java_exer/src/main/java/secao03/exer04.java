package secao03;

import java.util.Scanner;

//faça um algoritmo que peça dois números e imprima a soma

public class exer04 {
    public static void main(String[] args){
        //variaeis
        int num1, num2, soma;
        Scanner teclado = new Scanner(System.in);

        //entradas
        System.out.println("Digite o primeiro numero: ");
        num1 = teclado.nextInt();

        System.out.println("Digite o segundo numero: ");
        num2 = teclado.nextInt();

        //processamento
        soma = num1 + num2;
        System.out.println("Soma: " + soma);

        teclado.close();
    }
}
