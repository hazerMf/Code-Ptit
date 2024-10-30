/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package bai1;

import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author User
 */
public class Bai1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        if(s.length()==1){
            System.out.println(s);
        }
        while(s.length()>1){
            BigInteger a = new BigInteger(s.substring(0,(int)s.length()/2));
            BigInteger b = new BigInteger(s.substring((int)s.length()/2));
            
            BigInteger c = a.add(b);
            s = c.toString();
            System.out.println(c);
        }
    }
    
}
