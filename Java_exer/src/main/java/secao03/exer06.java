package secao03;


//faça um algoritmo que pergunte quanto você ganha por hora e o número de horas trabalhadas por mês.
//Calcule e mostre o total do seu salário no referido mês.

import java.util.Scanner;

public class exer06 {
    public static void main(String[] args) {

        //variaveis
        int horas;
        float ganho, salario_total;
        Scanner ler = new Scanner(System.in);

        //entrada
        System.out.println("Informe quantas horas foram trabalhadas no mês: ");
        horas = ler.nextInt();

        System.out.println("Informe o valor ganho por hora trabalhada no mês: ");
        ganho = ler.nextFloat();

        //processamento
        salario_total = horas * ganho;

        //saida
        System.out.println("O salário total desse mês depois de trabalhar " + horas + " horas foi de R$" + salario_total);

        ler.close();
    }
}
