import java.util.Scanner;
import javax.swing.JOptionPane;

public class App {
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

    public static void listardesocupados(String[] nomesuite,String q, Boolean[]quartos){
        for(int i=0; i<nomesuite.length; i++){
            if(quartos[converter(nomesuite[i])] == false){
                lista += nomesuite[i] + "\n";
            }
        }
        JOptionPane.showMessageDialog(null,"Lista de suítes desocupadas\n" + lista);
    }

public static void check_out(Boolean[] quartos, String q){
if(quartos[converter(q)] == true){
quartos[converter(q)] = false;
JOptionPane.showMessageDialog(null, "O quarto " + q + " está ocupado.");
}else{
JOptionPane.showMessageDialog(null, "O quarto " + q + " foi reservado.");
}
}
switch (opcao) {
case "1":
q = JOptionPane.showInputDialog("Informe o quarto que deseja reservar:");
check_in(quartos,q);
break;
case "2":
q = JOptionPane.showInputDialog("Informe o quarto que deseja:");
check_out(quartos,q);
break;
case "3":
/* quartodesejado = JOptionPane.showInputDialog("Informe o quarto que deseja
liberar:");
liberacao(quartos,quartodesejado,nome,dias,tel,email,formapag,cpf);*/
break;
case "4":
listardesocupados(nomesuite,q,quartos);
break;
case "5":
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

public static void listarvagos(String[]nomequartos, Boolean[]quartos, String quartodesejado, String[]nome, String lista){
        for(int i = 0; i<nomequartos.length; i++){
            quartodesejado = nomequartos[i];
            if(quartos[converter(quartodesejado)] == false){
                lista += nomequartos[i] + "\n";
            }
        }
        JOptionPane.showMessageDialog(null, "Quartos vagos:\n" + lista);
    }

public static void listarocupados(String[]nomequartos, Boolean[]quartos, String quartodesejado, String[]nome, String lista){
        for(int i = 0; i<nomequartos.length; i++){
            quartodesejado = nomequartos[i];
            if(quartos[converter(quartodesejado)] == true){
                lista += nomequartos[i] + "\n";
            }
        }
        JOptionPane.showMessageDialog(null, "Quartos ocupados:\n" + lista);
    }

    public static void main(String[] args)  {

        
        Boolean[] quartos = new Boolean[16];
     
        
        for(int i = 0; i< quartos.length; i++){
            quartos[i] = false;
        }

        String[] nomesuite = {"S101","S102","S103","S104","S201","S202","S203","S204","S301","S302","S303","S304","S401","S402","S403","S404"};
        
        String q = "";
        String opcao = "";

        while (opcao.equals("6") != true){

            opcao = JOptionPane.showInputDialog("                  Hotel de Suítes\n\nO que deseja fazer:\n\n1 - Check-in.\n2 - Check-out\n3 - Listar suítes desocupadas.\n4 - Listar suítes ocupadas.\n5 - Mostrar histórico de reservas.");

            switch (opcao) {
                case "1":
                    q = JOptionPane.showInputDialog("Informe o quarto que deseja reservar:");
                    check_in(quartos,q);
                    break;
                case "2":
                   check_out(quartos, q);
                    break;
                case "3":
                    listardesocupados(nomesuite,q,quartos);
                    break;
                case "4":
                   listarocupados(nomequartos,quartos,quartodesejado,nome,lista);
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

