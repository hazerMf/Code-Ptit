/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package bai2;

import java.util.Scanner;

/**
 *
 * @author User
 */
public class Bai2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-->0){
            String l = sc.nextLine();
            int ans = 0;
            if(l.length()>100){
                for(int i=100;i>0;i--){
                    if(l.charAt(i)==' ') {
                        ans = i;
                        break;
                    }
                }
                System.out.println(l.substring(0,ans));
            }else{
                System.out.println(l);
            }
            
        }
    }
    
}
