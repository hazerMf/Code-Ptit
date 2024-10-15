/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package khaibaosinhvien;

import java.util.Scanner;

/**
 *
 * @author User
 */
public class SinhVien {
    private String maSV,hoTen,lop,ngaySinh;
    private float GPA;
    private static int id = 1;
    public SinhVien(){
        maSV = "B20DDCCN"+String.format("%03d",id++);
        hoTen = "";
        lop = "";
        ngaySinh = "";
        GPA = 0;
    }
    public void input(Scanner sc) {
        sc.nextLine();
        hoTen = sc.nextLine();
        lop = sc.nextLine();
        ngaySinh = chuanhoa(sc.nextLine());
        GPA = sc.nextFloat();
    }
    public void output() {
        System.out.printf("%s %s %s %s %.2f\n",maSV,hoTen,lop,ngaySinh,GPA);
    }

    private String chuanhoa(String ngaySinh) {
        String[] a = ngaySinh.split("/");
        if(a[0].length()==1){
            a[0]="0"+a[0];
        }
        if(a[1].length()==1){
            a[1]="0"+a[1];
        }
        return a[0]+"/"+a[1]+"/"+a[2];
    }
}
