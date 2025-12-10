/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.tarefa9;

import java.util.Scanner;
 
public class Tarefa9{
    public static void main (String[] args) {
        Scanner input = new Scanner(System.in);
        
        System.out.print("F = ");
        double f = input.nextDouble();
 
        double c = ((f - 32.0) * 5.0) / 9.0;
        
        System.out.printf("\n%.2f fahrenheits = %.2f celsius \n", f, c);
    }
}
