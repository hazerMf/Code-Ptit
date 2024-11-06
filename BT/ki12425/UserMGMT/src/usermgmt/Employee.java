/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package usermgmt;

/**
 *
 * @author User
 */
public class Employee extends Person {
    private int salary; 

    public Employee(int salary,String name,String address) {
        super(name,address);
        this.salary = salary;
    }

    public int getSalary() {
        return salary;
    }

    public void setSalary(int salary) {
        this.salary = salary;
    }
    
    @Override
    public void display(){
        System.out.println(getName());
        System.out.println(getAddress());
        System.out.println(salary);
    }
    
    
}
