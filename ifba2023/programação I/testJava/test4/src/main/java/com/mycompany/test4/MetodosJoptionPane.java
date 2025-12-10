/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.test4;

/**
 *
 * @author Windows 10
 */
import javax.swing.JOptionPane;


public class MetodosJoptionPane {
   
    public static void main(String[ ] args) {
        String nome;
   
        nome = JOptionPane.showInputDialog("Qual o seu nome?");
        JOptionPane.showMessageDialog(null, "Seu nome é " + nome);
       
    }
   
}
