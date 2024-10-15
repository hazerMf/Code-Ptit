/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package pointmgnt;

import java.util.Scanner;

/**
 *
 * @author User
 */
public class PointMGNT {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner sc = new Scanner(System.in);
        short t = sc.nextShort();
        while(t-->0){
            double x1 = sc.nextDouble();
            double y1 = sc.nextDouble();
            double x2 = sc.nextDouble();
            double y2 = sc.nextDouble();
            Point p1 = new Point(x1,y1);
            Point p2 = new Point(x2,y2);
            System.out.printf("%.4f\n",p1.distance(p2));
        }
        
    }
    
}
