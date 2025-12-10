/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Project/Maven2/JavaApp/src/main/java/${packagePath}/${mainClassName}.java to edit this template
 */

package com.mycompany.test3;

/**
 *
 * @author Windows 10
 */
public class MetodoComParamERetorn {

    static int produto(int x, int y) {//parametros x e y 
        return x * y;
    }

   

    public static void main(String[] args) {
        int resultado;
       
        resultado = produto(5, 10);//quando muda o valor de x, y ou ambos o resultado mudará
       
        System.out.println(resultado);
       
       
    }
}