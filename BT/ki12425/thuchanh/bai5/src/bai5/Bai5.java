/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package bai5;

import java.util.Arrays;
import java.util.Scanner;

/**
 *
 * @author User
 */
public class Bai5 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        nv[] l = new nv[t];
        for(int i =0;i<t;i++){
            l[i] = new nv(sc.nextLine(),sc.nextLine(),sc.nextLine(),sc.nextLine());
        }
        Arrays.sort(l);
        for(nv i:l){
            float temp1 = Float.parseFloat(i.getTn());
            float temp2 = Float.parseFloat(i.getHs());
            if(temp1>90&&temp2>=8){
                System.out.println(i);
            }
        }
    }
    
}

class nv implements Comparable<nv> {
    private String ma,ten,dob,hs,tn;
    private static int cnt = 1;
    
    nv(String a,String b,String c,String d){
        this.ma = "NV"+String.format("%03d",cnt++ );
        this.ten = a;
        this.dob = b;
        this.hs = c;
        this.tn =d;
    }
    
    public String getTn(){
        return this.tn;
    }
    
    public String getHs(){
        return this.hs;
    }
    
    @Override
    public String toString(){
        return ma+" "+ten+" "+dob+" "+hs+" "+tn;
    }
    
    @Override
    public int compareTo(nv o){
        if(this.hs.equals(o.getHs())){
            return -this.tn.compareTo(o.getTn());
        }
        return -this.hs.compareTo(o.getHs());
    }
}


