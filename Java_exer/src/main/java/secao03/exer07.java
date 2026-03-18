package secao03;

import java.util.Scanner;

//Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal,
// usando a formula: (72.7 * altura) - 58
public class exer07 {
    public static void main(String[] args) {

        //variaveis
        float altura, peso_ideal;
        Scanner ler = new Scanner(System.in);

        //entrada
        System.out.println("Digite sua altura: ");
        altura = ler.nextFloat();

        //processamento
        peso_ideal = (float) ((72.7 * altura) - 58);

        //saida
        System.out.println("De acordo com sua altura o seu peso ideal é : " + peso_ideal);

        ler.close();
    }
}
