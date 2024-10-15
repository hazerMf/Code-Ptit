/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package bangtinhcong;

import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author User
 */
public class BangTinhCong {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        ArrayList<NV> arr = new ArrayList<>();
        while(t-->0){
            String hoTen = sc.nextLine();
            long luong = sc.nextLong();
            long ngay = sc.nextLong();
            
            sc.nextLine();
            String chucVu = sc.nextLine();
            NV e = new NV(hoTen,luong,ngay,chucVu);
            arr.add(e);
        }
        for(NV e:arr){
            e.hienThiTNNV();
        }
    }
    
}

class NV {
    private String maNV,hoTen,chucVu;
    private long luongCB,ngay;
    private static int id = 1;
    
    private long luongThang;
    private long thuong;
    private long phuCap;
    private long thuNhap;
    
    public NV(String hoTen,long luongCB,long ngay,String chucVu){
        this.maNV = "NV"+String.format("%02d",id++);
        this.hoTen = hoTen;
        this.luongCB = luongCB;
        this.ngay = ngay;
        this.chucVu = chucVu;
        
        this.luongThang = this.luongCB*this.ngay;
        this.thuong = tinhThuong();
        this.phuCap = tinhPhuCap();
        this.thuNhap = tinhThuNhap();
    }

    private long tinhThuong() {
        if(ngay>=25){
            return (long)(luongThang*20/100);
        }else if(ngay>=22){
            return (long)(luongThang*10/100);
        }else{
            return 0;
        }
    }

    private long tinhPhuCap() {
        switch(chucVu) {
            case "GD" : return 250000;
            case "PGD" : return 200000;
            case "TP" : return 180000;
            default : return 150000;
        }
        
    }

    private long tinhThuNhap() {
        return luongThang+thuong+phuCap;
    }
    
    public void hienThiTNNV(){
        System.out.printf("%s %s %d %d %d %d\n",maNV,hoTen,luongThang,thuong,phuCap,thuNhap);
    }
    
    
    
}
