import java.util.Scanner;
public class App2 {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner (System.in);
        System.out.print("Digite um valor em quilômetros: ");
        double km = scan.nextDouble();
        double resultado = km * 2;
        System.out.println("O valor em minutos é: " + resultado);

    }
}

