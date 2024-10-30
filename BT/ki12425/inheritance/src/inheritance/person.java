/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package inheritance;

/**
 *
 * @author User
 */
public class person {
    private String name,address;
    private int age;
    
    person(String a,int b,String c){
        this.name = a;
        this.age = b;
        this.address = c;
    }

    public String getName() {
        return name;
    }

    public String getAddress() {
        return address;
    }

    public int getAge() {
        return age;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public void setAge(int age) {
        this.age = age;
    }
    
    public void display(){
        System.out.println("Name: "+name+", Age: "+age+", Address: "+address);
    }
}
