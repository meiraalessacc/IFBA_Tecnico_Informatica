import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner scan = new Scanner (System.in);
        System.out.println("Nome de usuario:");
        String nome = scan.nextLine();
        System.out.println("Senha:");
        String senha = scan.nextLine();

         if(senha.equals("1234")){
             System.out.println("Usuario logado com suceso!");
         }else{
            System.out.println("Login invalido!");
         }
    }
}


