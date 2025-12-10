/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.tarefa7;

import java.util.Scanner;

public class Tarefa7 {

  public static void main(String[] args) {
    System.out.println("Digite o valor da lateral do quadrado: ");
    float lado = new Scanner(System.in).nextFloat();
    System.out.println("O dobro da area do quadrado eh de: " + ((lado * lado) * 2) );
  }

}
