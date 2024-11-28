/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */

import java.util.Scanner;
import java.util.Arrays;
/**
 *
 * @author User
 */
public class Bai1 {
    static class tl {
        String ma,ten;
        static int cnt = 1;

        tl(String a){
            this.ma = "TL"+String.format("%03d",cnt++);
            this.ten = a;
        }
    }
    
    static class phim implements Comparable<phim>{
        String ma,ten,ngay,tap,theLoai;
        static int cnt= 1;

        phim(String a,String b,String c,String d){
            this.ma = String.format("P%03d", cnt++);
            this.theLoai = a;
            this.ngay = b;
            this.ten = c;
            this.tap = d;
        }
        
        @Override
        public int compareTo(phim o){
            if(!this.ngay.equals(o.ngay)){
                return -this.ngay.compareTo(o.ngay);
            }else if(!this.ten.equals(o.ten)){
                return this.ten.compareTo(o.ten);
            }else return this.tap.compareTo(o.tap);
        }
        
        @Override
        public String toString(){
            return ma+" "+theLoai+" "+ngay+" "+ten+" "+tap;
        }
    }
    
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        sc.nextLine();
        tl[] ltl = new tl[n];
        phim[] lp = new phim[m];
        for(int i=0;i<n;i++){
            ltl[i] = new tl(sc.nextLine());
        }
        for(int i=0;i<m;i++){
            String temp = sc.nextLine();
            String ans = "";
            for(tl j:ltl){
                if(j.ma.equals(temp)){
                    ans = j.ten;
                }
            }
            lp[i] = new phim(ans,sc.nextLine(),sc.nextLine(),sc.nextLine());
        }
        Arrays.sort(lp);
        for(phim i:lp){
            System.out.println(i);
        }
    }
    
}



