import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

/**
 *
 * @author User
 */
public class bai2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            int n = in.nextInt();
            Point p[] = new Point[n];
            for(int i = 0; i < n; i++){
                p[i] = new Point(in.nextInt(),in.nextInt());
            }
            Polygon poly = new Polygon(p);
            System.out.println(poly.getArea());
        }
    }
}

class Point{
    public float x,y;
    
    Point(float x,float y){
        this.x = x;
        this.y = y;
    }
}

class Polygon{
    public Point[] p;
    
    Polygon(Point[] x){
        this.p=x;
    }
    
    public String getArea(){
        float sum1 = 0,sum2 = 0;
        int n = p.length;
        for(int i=0;i<n;i++){
            sum1 += p[i].x * p[(i+1)%n].y;
            sum2 += p[i].y * p[(i+1)%n].x;
        }
        return String.format("%.3f",Math.abs((sum1-sum2))/2);
    }
}