/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.original1;

/**
 *
 * @author Windows 10
 */
import java.util.Scanner;
import javax.swing.JOptionPane;
public class Original1 {

    // Array para armazenar quartos de hotel
    private static final String[][] quartos = new String[16][6];
    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        // Inicializar quartos de hotel
        for (int i = 0; i < quartos.length; i++) {
            quartos[i][0] = String.valueOf(i + 1);
            quartos[i][1] = "Desocupados";
        }

        // Exibe o menu do hotel
        while (true) {
         String escolha = JOptionPane.showInputDialog("-----Bem-vindo ao Hotel!-----\n\n1. Check-In\n2. Check-Out\n3. Ver disponibilidade dos quartos\n4. Saida\n\nInforme sua escolha:");
        int Int_escolha = Integer.parseInt(escolha);//Converte a string  em um numero inteiro 
            switch (Int_escolha) {
                case 1:
                    checkIn();
                    break;
                case 2:
                    checkOut();
                    break;
                case 3:
                    disponibilidade();
                    break;
                case 4:
                    System.exit(0);
                    break;
                default:
                    JOptionPane.showMessageDialog(null, "\nOpção invalida. Por favor tente novamente");
                    break;
            }
        }
    }

    // Método para fazer o check-in dos hóspedes
    private static void checkIn() {
         String numeroQuarto = JOptionPane.showInputDialog("\nInforme o numero do quarto desejado:");
        int Int_numeroQuarto = Integer.parseInt(numeroQuarto);//Converte a string  em um numero inteiro 
        

        if (Int_numeroQuarto >= 0 && Int_numeroQuarto < quartos.length) {
            if (quartos[Int_numeroQuarto][1].equals("Desocupados")){
                String nome = JOptionPane.showInputDialog("\n\nDigite o nome do hóspede:");
                quartos[Int_numeroQuarto][1] = nome;
                
                String cpf = JOptionPane.showInputDialog("\nDigite o cpf do hóspede:");
                int Int_cpf = Integer.parseInt(cpf);//Converte a string  em um numero inteiro 
                quartos[Int_numeroQuarto][2] = cpf ;//duvida se aqui vai ser cpf ou int _cpf
                
                String dias = JOptionPane.showInputDialog("\nQuantos dias deseja ficar hospedado? ");
                int Int_dias = Integer.parseInt(dias);//Converte a string  em um numero inteiro 
                quartos[Int_numeroQuarto][3] = dias;
              
               String pagamento = JOptionPane.showInputDialog("\nQual a forma de pagamento? ");
                quartos[Int_numeroQuarto][4] = pagamento;
                System.out.println("\nCheck-in realizado com sucesso.");
            } else {
                System.out.println("\nDesculpe, este quarto já está ocupado.");
            }
        } else {
            System.out.println("\nNúmero de quarto inválido. Por favor, tente novamente.");
        }
    }

//Método para check-out dos hóspedes
    private static void checkOut() {
        System.out.print("\nDigite o número do quarto:");
        int numeroQuarto = scanner.nextInt() - 1;

        if (numeroQuarto >= 0 && numeroQuarto < quartos.length) {
            if (!quartos[numeroQuarto][1].equals("Desocupado")) {
                System.out.println("\nHóspede " + quartos[numeroQuarto][1] + " fez check-out do quarto " + quartos[numeroQuarto][0] + ".");
                quartos[numeroQuarto][1] = "Desocupado";
            } else {
                System.out.println("\nDesculpe, este quarto já está vago.");
            }
        } else {
            System.out.println("\nNúmero de quarto inválido. Por favor, tente novamente.");
        }
    }

 // Método para visualizar o status de ocupação
    private static void disponibilidade() {
        for (String[] quarto : quartos) {
            JOptionPane.showInputDialog( quarto[0] + quarto[1]);
        }
    }
}
