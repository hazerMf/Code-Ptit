/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package bai4;

import java.util.Scanner;

/**
 *
 * @author User
 */
public class Bai4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int[] chk = new int[100000];
            int l1 = sc.nextInt();
            int l2 = sc.nextInt();
            int max = 0;
            for(int i =0;i<100000;i++) chk[i]=0;
            for(int i=0;i<l1;i++){
                int temp = sc.nextInt();
                chk[temp]++;
                if(temp>max) max = temp;
            }
            for(int i=0;i<l2;i++){
                int temp = sc.nextInt();
                chk[temp]--;
                if(temp>max) max = temp;
            }
            int ans = 1;
            for(int i=0;i<=max;i++){
                if(chk[i]<0) ans = 0;
            }
            if(ans==1){
                System.out.println("Yes");
            }else{
                System.out.println("No");
            }
        }
    }
    
}
