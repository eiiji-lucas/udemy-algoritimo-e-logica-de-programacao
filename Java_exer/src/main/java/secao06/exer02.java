package secao06;

import java.util.Scanner;

//Elabore um algoritmo que leia um número. Se for positivo armazene-o em 'a', se for negativo em 'b'.
//no final mostrar o resultado
public class exer02 {
    public static void main(String[] args) {

        //variaveis
        int n, a, b;
        Scanner ler = new Scanner(System.in);

        //entrada
        System.out.println("Digite um numero: ");
        n = ler.nextInt();

        //processamento
        if (n > 0){
            a = n;
            //saida
            System.out.println(a);
        } else {
            b = n;
            System.out.println(b);
        }

        ler.close();
    }
}
