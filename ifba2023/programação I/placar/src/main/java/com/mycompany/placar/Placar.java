/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.placar;
import java.io.PrintStream;
import java.util.Scanner;
/**
 *
 * @author Windows 10
 */
public class Placar {


    
    public static void menu(){
        System.out.println("1.Resultado dos Jogos");
        System.out.println("2.Quantidade de gols");
        System.out.println("Opcao:");
    }
    public static void menu2(){
    System.out.println("-Informe o placares finais dos jogos-\nSendo:");
   System.out.println("V-Vitorias");
        System.out.println("E-Empates");
         System.out.println("D-Derrotas\n");
         Calculo();
    }

    public static void Calculo(){
        
    }
    
    public static void gols(){
        Scanner entrada = new Scanner(System.in);
        System.out.println("Informe o número de gols realizados:");
        int gols= entrada.nextInt();
        PrintStream printf = System.out.printf("Foram feitos %d gols\n",gols );
    }
    
    public static void exclui(){
        System.out.println("Você entrou no método Exclui.");
    }
    
    public static void consulta(){
        System.out.println("Você entrou no método Consulta.");
    }
    
    public static void main(String[] args) {
        int opcao;
        Scanner entrada = new Scanner(System.in);
        
        do{
            menu();
            opcao = entrada.nextInt();
            
            switch(opcao){
            case 1:
                menu2();
                break;
                
            case 2:
                gols();
                break;
            
            default:
                System.out.println("Opção inválida.");
            }
        } while(opcao != 0);
    }
}

