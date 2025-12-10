import javax.swing.JOptionPane;

/**
 *
 * @author angel campillo
 */
public class Menu {

  
   public static void main(String[] args) {
     
   byte opcion=0;


   do{
      opcion=Byte.parseByte(JOptionPane.showInputDialog(
      "***MENU PRINCIPAL***\n"
    + "1. SUMA\n"
    + "2. RESTA\n"
    + "3. MULTIPLICACION\n"
    + "4. DIVISION\n"
    + "5. SALIR\n"
    + "ELIJA SU OPCION :)"));
      float numero1=0, numero2=0, resultado=0; 
      switch(opcion){
         case 1:
            numero1 = Float.parseFloat(JOptionPane.showInputDialog("Digite el primer numero"));
            numero2 = Float.parseFloat(JOptionPane.showInputDialog("Digite el segundo numero"));
            resultado = numero1 + numero2;
            JOptionPane.showMessageDialog(null, "Resultado "+resultado);
            JOptionPane.showMessageDialog(null, "sumando");
            break;
         case 2:
            numero1 = Float.parseFloat(JOptionPane.showInputDialog("Digite el primer numero"));
            numero2 = Float.parseFloat(JOptionPane.showInputDialog("Digite el segundo numero"));
            resultado = numero1 - numero2;
            JOptionPane.showMessageDialog(null, "Resultado "+resultado);
            JOptionPane.showMessageDialog(null, "Restando");
            break;
         case 3:
            numero1 = Float.parseFloat(JOptionPane.showInputDialog("Digite el primer numero"));
            numero2 = Float.parseFloat(JOptionPane.showInputDialog("Digite el segundo numero"));
            resultado = numero1 * numero2;
            JOptionPane.showMessageDialog(null, "Resultado "+resultado);
            JOptionPane.showMessageDialog(null, "Multiplicando");
            break;
         case 4:
            numero1 = Float.parseFloat(JOptionPane.showInputDialog("Digite el primer numero"));
            numero2 = Float.parseFloat(JOptionPane.showInputDialog("Digite el segundo numero"));
            if(numero2>0){
             resultado = numero1 / numero2;
             JOptionPane.showMessageDialog(null, "Resultado "+resultado); 
            }
            JOptionPane.showMessageDialog(null, "dividiendo");
            break;
         case 5:
            opcion=5;
            break;
         default:
            JOptionPane.showMessageDialog(null, "Opcion Invalida");
            break;
            
      }
      
   }while(opcion!=5);   
   System.exit(0);
   
   }
   
}
