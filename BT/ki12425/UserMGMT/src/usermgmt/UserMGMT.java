/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package usermgmt;

/**
 *
 * @author User
 */
public class UserMGMT {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Person p = new Employee(3000,"Ng Van A","Ha Noi");
        p.display();
        
        p = new Customer(5000,"Tran Van B","HCM");
        p.display();
    }
    
}
