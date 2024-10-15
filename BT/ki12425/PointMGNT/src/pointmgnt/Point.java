/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pointmgnt;

import static java.lang.Math.pow;
import static java.lang.Math.sqrt;
/**
 *
 * @author User
 */
public class Point {
    private double x;
    private double y;
    
    public Point(){
        
    }
    public Point(double x, double y){
        this.x=x;
        this.y=y;
    }
    public Point(Point p){
        this.x=p.x;
        this.y=p.y;
    }
    
    public double getX(){
        return x;
    }
    public double getY(){
        return y;
    }
    public double distance(Point secondPoint){
        return sqrt(pow(this.x-secondPoint.x,2)+pow(this.y-secondPoint.y,2));
    }
    public double distance(Point p1,Point p2){
        return sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
    }
    @Override
    public String toString(){
        return "("+x+","+y+")";
    }
}
