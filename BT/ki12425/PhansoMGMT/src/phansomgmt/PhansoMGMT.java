/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package phansomgmt;

import java.util.Scanner;

/**
 *
 * @author User
 */
public class PhansoMGMT {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong(), b = sc.nextLong(); 
        PhanSo p = new PhanSo(a,b);
        System.out.println(p);
    }
    
}
