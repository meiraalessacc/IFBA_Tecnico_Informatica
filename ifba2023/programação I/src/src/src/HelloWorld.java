/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package src;
import java.util.Scanner;
/**
 *
 * @author IFBA-CONVIDADO
 */
public class HelloWorld {
    public static void lerDados(){
    
     Scanner scanner = new Scanner(System.in);
    System .out.println("Informe seu nome:");
    String nome = scanner.next();
    System .out.println("Estado civil (S- Solteira |C-Casado");
    char estadoCivil = scanner.next ().charAt(0);
    }
    public static int calcularIdade(int anoAtual, int anoNasc){
        int idade = anoAtual - anoNasc;
        return idade;
    }
}
    public static void main(String[] args) {
   
}
    

