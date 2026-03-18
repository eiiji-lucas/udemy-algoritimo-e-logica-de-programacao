package secao06;


//ler uma variavel e imprimi-la caso ele for maior que 100 caso contrario imprimi-la com valor 0

import java.util.Scanner;

public class exer01 {
    public static void main(String[] args) {

        //variaveis
        int var1;
        Scanner ler = new Scanner(System.in);

        //entrada
        System.out.println("Digite um valor: ");
        var1 = ler.nextInt();

        //processamento
        if (var1 < 100){
            System.out.println(var1);
        } else{
            var1 = 0;
            System.out.println(var1);
        }

        ler.close();
    }
}
