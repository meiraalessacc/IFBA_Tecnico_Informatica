/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package jogo;
import java.util.Scanner;
/**
 *
 * @author IFBA-CONVIDADO
 */
public class Jogo {
    public static void main(String[] args) {
         Scanner entrada = new Scanner(System.in);
  System.out.print("Informe a quantidade de gols:");
  int gols= entrada.nextInt();
  System.out.printf("Foram feitos %d gols",gols );
   char numero_V = 3;
     System.out.printf("\nInforme o resultado do jogo,Sendo:\nV-Vitoria\nE-Enpate\nD-Derrota\n");
     Scanner result = new Scanner(System.in);
   char numero_V = 3;
numero_V= result.nextLine().charAt(0);}
    } 
    

    


