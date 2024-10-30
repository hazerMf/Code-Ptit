/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package inheritance;

/**
 *
 * @author User
 */
public class teacher extends person {
    private int salary;

    public teacher(int salary, String a, int b, String c) {
        super(a, b, c);
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
        super.display();
        System.out.println(", salary= "+salary);
    }
}
