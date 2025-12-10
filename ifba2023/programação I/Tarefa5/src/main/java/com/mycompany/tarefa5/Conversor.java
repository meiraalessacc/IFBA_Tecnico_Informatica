/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.tarefa5;

/**
 *
 * @author Windows 10
 */
import java.util.Scanner;

public class Conversor {
	
 public static void main(String args[]){

  Scanner entrada = new Scanner(System.in);

  System.out.print("Centimetros? ");
  float centimetros = entrada.nextFloat();

  float metros = centimetros / 100;

  System.out.printf("%.1f m",metros );

 }
}

