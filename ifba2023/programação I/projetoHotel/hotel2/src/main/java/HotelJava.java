import java.util.Scanner;

public class HotelJava{

    // Array para armazenar quartos de hotel
    private static final String[][] quartos = new String[15][6];
    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        // Inicializar quartos de hotel
        for (int i = 0; i < quartos.length; i++) {
            quartos[i][0] = String.valueOf(i + 1);
            quartos[i][1] = "Desocupados";
        }

        // Exibe o menu do hotel
        while (true) {
            System.out.println("\nBem-vindo ao hotel! \n");
            System.out.println("1. Check-In");
            System.out.println("2. Check-Out");
            System.out.println("3. Ver disponibilidade dos quartos");
            System.out.println("4. Saida");
            System.out.print("\nInforme sua escolha: ");

            int escolha = scanner.nextInt();

            switch (escolha) {
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
                    System.out.println("\nOpção invalida.Por favor tente novamente");
                    break;
            }
        }
    }

    // Método para fazer o check-in dos hóspedes  
    
    
    private static void checkIn() {
        System.out.print("\nInforme o numero do quarto desejado: ");
        int numeroQuarto = scanner.nextInt() - 1;

        if (numeroQuarto >= 0 && numeroQuarto < quartos.length) {
            if (quartos[numeroQuarto][1].equals("Desocupados")) {
                System.out.print("\nDigite o nome do hóspede: ");
                String nome = scanner.next();
                quartos[numeroQuarto][1] = nome;
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
        System.out.println("\nQuarto\tHóspede");
        for (String[] quarto : quartos) {
            System.out.println(quarto[0] + "\t" + quarto[1]);
        }
    }
}