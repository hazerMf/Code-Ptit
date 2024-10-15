/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package studentmgmt;
import java.util.Scanner;
/**
 *
 * @author User
 */
public class Student {
    String code;
    String name;
    int birthYear;
    String address;
    
    
    
    void input(){
        Scanner sc = new Scanner(System.in);
        code = sc.next();
        sc.nextLine();
        name = sc.nextLine();
        birthYear = sc.nextInt();
        sc.nextLine();
        address = sc.nextLine();
    }
    
    void output(){
        System.out.println("code: "+code);
        System.out.println("name: "+name);
        System.out.println("birthYear: "+birthYear);
        System.out.println("address: "+address);
    }
}
