/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package khaibaosinhvien;

import java.util.Scanner;

/**
 *
 * @author User
 */
public class KhaiBaoSinhVien {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        SinhVien[] danhSachSV = new SinhVien[n];
        for(int i=0;i<n;i++){
            danhSachSV[i] = new SinhVien();
            danhSachSV[i].input(sc);
        }
        for(int i=0;i<n;i++){
            danhSachSV[i].output();
        }
    }
    
}
