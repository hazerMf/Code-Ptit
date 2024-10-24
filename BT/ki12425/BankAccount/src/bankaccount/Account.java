/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bankaccount;

/**
 *
 * @author User
 */
public class Account {
    private int id=1;
    private String name;
    private int balance = 0;
    
    public Account(String name){
        id++;
        this.name=name;
    }
    
    public Account(String name,int balance){
        id++;
        this.name=name;
        this.balance = balance;
    }
    
    public int getId(){
        return this.id;
    }
    
    public String getName(){
        return this.name;
    }
    
    public void setName(){
        this.name = name;
    }
    
    public void display(){
        System.out.println(this.balance);
    }
    
    public void deposit(int amount){
        if(amount>0){
            balance += amount;
        }
    }
    
    public void withdraw(int amount){
        if(balance>0&&amount>0&&amount<=balance){
            balance -= amount;
        }else{
            System.out.println("Amount exceeds balance");
        }
    }
}
