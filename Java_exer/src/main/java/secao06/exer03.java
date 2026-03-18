package secao06;

//Ler um número e verificar se ele é par ou ímpar. Quando par armazenar em 'p' e quando for ímpar em 'i'
//exibir 'p' e 'i'no final do processamento

import java.util.Scanner;

public class exer03 {
    public static void main(String[] args) {

        //variaveis
        int n, p = 0, i = 0;
        Scanner sc = new Scanner(System.in);

        //processamento
        System.out.print("Informe um numero: ");
        n = sc.nextInt();

        //processamento
        if (n % 2 == 0) {
            p = n;
        } else {
            i = n;
        }

        System.out.print(p);
        System.out.println(i);
        sc.close();
    }
}
