/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dominio;

/**
 *
 * @author IFBA
 */
public class Programa {
    public static void main(String []args){
        Pessoa p0 = new Pessoa(143, "Java Prado","400.2892.2");
        Pessoa p1 = new Pessoa(587, "Maria Pereira", null);
        
        Funcionario f0 = new Funcionario(456, "Pedro", "111.111.111", "Coordenador");
        
        system.out.println(p0.toString());
        system.out.println(f0.getNome());
        system.out.println(f0.toString());
        
    }
}
