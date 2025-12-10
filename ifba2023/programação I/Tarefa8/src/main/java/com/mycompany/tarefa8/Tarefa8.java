/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.tarefa8;

import java.util.Scanner;

public class Tarefa8 {

  public static void main(String[] args) {
    System.out.println("Digite o valor da sua hora de trabalho: ");
    float valordahora = new Scanner(System.in).nextFloat();
    System.out.println("Digite quantas horas voce trabalha por dia: ");
    int horastrabalhadas = new Scanner(System.in).nextInt();
    int quantidadededias = 22; //estimativa de dias úteis em um mês
    System.out.printf("O seu salario, em um mes, eh de: %.2f", (valordahora * horastrabalhadas) * quantidadededias);
  
  }
}
