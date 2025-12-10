import java.util.Scanner;

public class Soma
{

    public static void main(String[] args) 
    {
        
        Scanner entrada = new Scanner(System.in);
        int num1;
        int num2;
        int soma;

        System.out.print("Digite o primeiro número: ");
        num1 = entrada.nextInt();

        System.out.print("Digite o segundo número: ");
        num2 = entrada.nextInt();

        soma = num1 + num2;

        System.out.println("Soma igual a " + soma );

    }

}