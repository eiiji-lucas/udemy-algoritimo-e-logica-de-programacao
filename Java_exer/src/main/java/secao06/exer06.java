package secao06;

//Leia o codigo e numero de horas trabalhadas de um operario. Calcule o salario sabendo que ele ganha R$ 10 por hora.
//Quando o valor exceder 50, calcular o excedente sabendo que ganha R$20 por hora.

import java.util.Scanner;

public class exer06 {
    public static void main(String[] args) {
        //entrada
        Scanner sc = new Scanner(System.in);
        int c;
        float horas, e = 0, salario,valor_por_hora = (float)10.00;

        System.out.println("Informe seu código: ");
        c = sc.nextInt();
        System.out.println("Informe a quantidade de horas trabalhadas: ");
        horas = sc.nextFloat();

        //processamento
        if (horas < 50) {
            e = (float)(horas - 50) * (float)20.00;{
                salario = (horas * valor_por_hora) + e;
                System.out.printf("Salario Total: R$ %.2f\n", salario);
                System.out.println("Salario excedente: R$ %.2f/n" + e);
            }
        }else {
            salario = horas * valor_por_hora;
            System.out.printf("Salario Total: R$ %.2f\n", salario);
            System.out.println("Salario excedente: R$ %.2f/n" + e);
        }
        sc.close();
    }
}
