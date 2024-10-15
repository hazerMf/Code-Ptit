/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package rectangle;

/**
 *
 * @author User
 */
public class ShapeMGMT {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Rectangle r = new Rectangle();
        r.getInfomation();
        r.display();
        System.out.println(r.getArea());
        System.out.println(r.getPerimeter());
    }
    
}
