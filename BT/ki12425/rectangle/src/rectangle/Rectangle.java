/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package rectangle;
import java.util.Scanner;
/**
 *
 * @author User
 */
public class Rectangle {
    double length;
    double width;
    
    void getInfomation(){
        Scanner sc = new Scanner(System.in);
        length = sc.nextDouble();
        width = sc.nextDouble();
        
    }
    void display(){
        System.out.println("length: "+length);
        System.out.println("width: "+width);
    }
    
    double getArea(){
        return length*width;
    }
    double getPerimeter(){
        return 2*(length+width);
    }
}
