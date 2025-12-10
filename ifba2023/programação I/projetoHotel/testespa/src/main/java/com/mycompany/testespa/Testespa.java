/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.testespa;

import java.util.Scanner;
import javax.swing.JOptionPane;

public class Testespa {

    static Scanner s = new Scanner(System.in);
    static String h = "";
    static String lista = "";

    public static int converter(String q){
        int p = 0;
        switch(q){
            case "S101":
                p=0;
                break;
            case "S102":
                p=1;
                break;
            case "S103":
                p=2;
                break;
            case "S104":
                p=3;
                break;
            case "S201":
                p=4;
                break;
            case "S202":
                p=5;
                break;
            case "S203":
                p=6;
                break;
            case "S204":
                p=7;
                break;
            case "S301":
                p=8;
                break;
            case "S302":
                p=9;  
                break;
            case "S303":
                p=10;  
                break;
            case "S304":
                p=11;  
                break;
            case "S401":
                p=12;  
                break;
            case "S402":
                p=13;  
                break;
            case "S403":
                p=14;  
                break;
            case "S404":
                p=15;  
                break;

            default: 
                JOptionPane.showMessageDialog(null,"O código do quarto informado não foi encontrado.");
                break;       
        }
        return p; 
    }

    public static void check_in(Boolean[] quartos, String q){
        if(quartos[converter(q)] == false){

            quartos[converter(q)] = true;

          
            JOptionPane.showMessageDialog(null, "O quarto " + q + " foi reservado.");

        }else{
            JOptionPane.showMessageDialog(null, "O quarto " + q + " está ocupado.");
        }
    }


    public static void main(String[] args)  {

        
        Boolean[] quartos = new Boolean[16];
     
        
        for(int i = 0; i< quartos.length; i++){
            quartos[i] = false;
        }

        String[] nomequartos = {"S101","S102","S103","S104","S201","S202","S203","S204","S301","S302","S303","S304","S401","S402","S403","S404"};
        
        String q = "";
        String opcao = "";

        while (opcao.equals("6") != true){

            opcao = JOptionPane.showInputDialog("                  Reserva de Hotel\n\nInforme a ação que deseja realizar:\n\n1 - Reservar quarto.\n2 - Realizar liberação\n3 - Listar quartos vagos.\n4 - Listar quartos ocupados.\n5 - Apresentar histórico de reservas.");

            switch (opcao) {
                case "1":
                    q = JOptionPane.showInputDialog("Informe o quarto que deseja reservar:");
                    check_in(quartos,q);
                    break;
                case "2":
                   /* quartodesejado = JOptionPane.showInputDialog("Informe o quarto que deseja liberar:");
                    liberacao(quartos,quartodesejado,nome,dias,tel,email,formapag,cpf);*/
                    break;
                case "3":
                    //listarvagos(nomequartos,quartos,quartodesejado,lista);
                    break;
                case "4":
                    //listarocupados(nomequartos,quartos,quartodesejado,nome,lista);
                    break;
                case "5":
                    //historicoDoHotel(h);
                    break;
                case "6":
                    System.exit(0);
                default:
                    JOptionPane.showMessageDialog(null, "Opção inválida.");
                    break;
            }
        }
    }
}


