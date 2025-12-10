/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package calculadora;

import java.util.Scanner;

/**
 *
 * @author IFBA-CONVIDADO
 */
public class Main
(String[] args){
    
     public static int somar(int a, int b){
        return a + b;
    }
}
 public static void main(String[] args) {
    Scanner sc =new Scanner(System.in);
System.out.println("Informe um numero:");
int n1 = sc.nextInt();
System.out.println("Informe outro numero:");
int n2 = sc.nextInt();

System.out.printf("\n%d + %d = %d",n1,n2,somar(n1,n2));

}
