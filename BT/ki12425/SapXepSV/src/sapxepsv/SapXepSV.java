/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package sapxepsv;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author User
 */
public class SapXepSV {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        List<SinhVien> list = new ArrayList<>();
        while(n-->0){
            SinhVien temp = new SinhVien();
            temp.input(sc);
            list.add(temp);
        }
        list.sort(Comparator.comparing(SinhVien::getLop).thenComparing(SinhVien::getmaSV));
        for(SinhVien i : list){
            System.out.println(i);
        }
        
    }
    
}
