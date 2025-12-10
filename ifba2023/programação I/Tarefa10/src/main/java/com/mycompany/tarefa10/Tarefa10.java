/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.tarefa10;

/**
 *
 * @author Windows 10
 */

   import java.util.Scanner;
 
public class Tarefa10{
    public static void main (String[] args) {
        Scanner input = new Scanner(System.in);
        
        System.out.print("C = ");
        double c = input.nextDouble();
 
        double f = (9.0 * c + 160.0) / 5.0;
        
        System.out.printf("\n%.2f celsius = %.2f fahrenheits \n", c, f);
    }
}
