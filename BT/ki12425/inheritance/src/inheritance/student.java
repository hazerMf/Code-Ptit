/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package inheritance;

/**
 *
 * @author User
 */
public class student extends person {
    private double gpa;

    public student(double GPA, String a, int b, String c) {
        super(a, b, c);
        this.gpa = GPA;
    }

    public double getGPA() {
        return gpa;
    }

    public void setGPA(double GPA) {
        this.gpa = GPA;
    }
    
    @Override
    public void display(){
        super.display();
        System.out.println(", GPA= "+gpa);
    }
}
