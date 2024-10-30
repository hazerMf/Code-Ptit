/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package bai3;

import java.util.Scanner;
import java.util.Stack;

/**
 *
 * @author User
 */
public class Bai3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int[] l= new int[t];
        for(int i=0;i<t;i++){
            l[i] = sc.nextInt();
        }
        Stack<Integer> st = new Stack<>();
        
        for(int i=0;i<t;i++){
            if(st.isEmpty()){
                st.push(l[i]);
            }else{
                if((st.peek()+l[i])%2==0){
                    st.pop();
                }else{
                    st.push(l[i]);
                }
            }
        }
        System.out.println(st.size());
    }
    
}
