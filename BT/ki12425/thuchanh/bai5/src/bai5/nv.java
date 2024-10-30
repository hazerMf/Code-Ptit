/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai5;

/**
 *
 * @author User
 */
public class nv implements Comparable<nv> {
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
