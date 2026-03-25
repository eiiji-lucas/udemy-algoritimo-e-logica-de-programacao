package secao06;

//Faça um algoritmo que leia um numero inteiro
// e mostre uma mensagem indicando se este numero é par ou impar, e se é positivo ou negativo

import java.util.Scanner;

public class exer08 {
    public static void main(String[] args) {

        //variaveis
        Scanner sc = new Scanner(System.in);
        int num;

        //entrada
        System.out.print("Digite um numero: ");
        num = sc.nextInt();

        //processamento
        if (num % 2 == 0) {
            if (num > 0) {
                System.out.printf("O número %d é par e positivo./n", num);
            }else {
                System.out.printf("O número %d é par e negativo./n", num);
            }
        }else {
            if (num > 0) {
                System.out.printf("O número %d é ímpar e positivo./n", num);
            }else {
                System.out.printf("O número %d é impar e negativo./n", num);
            }
        }
        sc.close();
    }
}
