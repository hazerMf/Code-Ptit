/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package sapxepsv;

import java.util.Scanner;

/**
 *
 * @author User
 */
public class SinhVien {
    private String maSV,hoTen,lop,email;
    public SinhVien(){
        maSV = "";
        hoTen = "";
        lop = "";
        email = "";
    }
    public void input(Scanner sc) {
        sc.nextLine();
        maSV = sc.nextLine();
        hoTen = sc.nextLine();
        lop = sc.nextLine();
        email = sc.nextLine();
    }
    public void output() {
        System.out.printf("%s %s %s %s",maSV,hoTen,lop,email);
    }

}
