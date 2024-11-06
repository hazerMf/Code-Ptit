/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package usermgmt;

/**
 *
 * @author User
 */
public class Customer extends Person{
    private int balance;
    
    public Customer(int balance,String name,String address){
        super(name,address);
        this.balance = balance;
    }
    
    @Override
    public void display(){
        System.out.println(getName());
        System.out.println(getAddress());
        System.out.println(balance);
    }
}
