package secao06;

//Desenvolva um algoritmo que:
//a)leia 4 numeros.
//b)calcule o quadrado de cada um.
//c)se o valor total do q3 for >= 1000 imprimir
//d)caso contrario imprimir os outros valores e seus quadrados

import java.util.Scanner;

public class exer07 {
    public static void main(String[] args) {

        //variaveis
        int num1, num2, num3, num4, q1, q2, q3, q4;

        Scanner sc = new Scanner(System.in);
        System.out.println("Digite o primeiro numero: ");
        num1 = sc.nextInt();
        System.out.println("Digite o segundo numero: ");
        num2 = sc.nextInt();
        System.out.println("Digite o terceiro numero: ");
        num3 = sc.nextInt();
        System.out.println("Digite o quarto numero: ");
        num4 = sc.nextInt();

        //processamento
        q1 = num1 * num1;
        q2 = num2 * num2;
        q3 = num3 * num3;
        q4 = num4 * num4;

        //saida
        if (q3 >= 1000){
            System.out.println(q3);
        }else {
            System.out.printf("Num1: %d Quadrado: %d", num1, q1);
            System.out.printf("Num2: %d Quadrado: %d", num2, q2);
            System.out.printf("Num3: %d Quadrado: %d", num3, q3);
            System.out.printf("Num4: %d Quadrado: %d", num4, q4);
        }

        sc.close();
    }
}
