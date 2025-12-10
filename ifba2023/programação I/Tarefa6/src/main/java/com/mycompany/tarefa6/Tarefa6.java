/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.tarefa6;

import java.util.Scanner;

public class tarefa6 {

  public static void main(String[] args) {
    System.out.println("Digite o raio da circunferencia: ");
    float raio = new Scanner(System.in).nextFloat();
    double area = Math.PI * Math.pow(raio, 2);
    System.out.printf("A area da circunferencia eh de: %.2f", area);
  }

}
