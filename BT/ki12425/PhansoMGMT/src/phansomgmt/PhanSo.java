/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package phansomgmt;

/**
 *
 * @author User
 */
public class PhanSo {
    static long gcd(long a,long b){
        if(b == 0) return a;
        else return gcd(b,a%b); 
    }

    private long tuso;
    private long mauso;
    PhanSo(long a,long b){
        this.tuso = a;
        this.mauso = b;
        
    }
    public String toString(){
        long tmp = this.tuso; 
        this.tuso /= gcd(this.tuso,this.mauso); 
        this.mauso/=gcd(tmp,this.mauso); 
        return this.tuso + "/" + this.mauso; 
    }

    
}
