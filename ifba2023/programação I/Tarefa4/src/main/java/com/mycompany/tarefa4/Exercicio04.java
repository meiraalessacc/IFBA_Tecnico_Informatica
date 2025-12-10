/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.tarefa4;

import java.util.Scanner;

public class Exercicio04 {
    
    public static void main(String[] args) {
        Scanner ent = new Scanner(System.in);
        int nota1, nota2, nota3, nota4;
        int media, i, contAluno = 0;
       
        
            System.out.println("Aluno digite sua 1ª nota");
            nota1 = ent.nextInt();
            
         
            System.out.println("Aluno digite sua 2ª nota");
            nota2 = ent.nextInt();
            
     
            System.out.println("Aluno  digite sua 3ª nota");
            nota3 = ent.nextInt();
            
           
            System.out.println("Aluno  digite sua 4ª nota");
            nota4 = ent.nextInt();
            
         
            media = (nota1 + nota2 + nota3 + nota4) / 4;
            System.out.println("A média do aluno " + contAluno + " é " + media);
            
            
     
            if(media >= 6){
                System.out.println("Aprovado");
            } else{
                System.out.println("Reprovado");
            }
        }       
    }


