import java.util.Scanner;
import static java.lang.Math.pow;
import static java.lang.Math.sqrt;

public class J04008 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            Point[] arr = new Point[3];
            for (int i = 0; i < 3; i++) {
                double x = sc.nextDouble();
                double y = sc.nextDouble();
                arr[i] = new Point(x, y);
            }
            double a = arr[0].distance(arr[1]);
            double b = arr[1].distance(arr[2]);
            double c = arr[0].distance(arr[2]);
            if (a + b > c && b + c > a && a + c > b) {
                System.out.printf("%.3f\n", a + b + c);
            } else {
                System.out.println("INVALID");
            }
        }
    }
}


class Point{
    private double x;
    private double y;

    public Point() {
        this(0f, 0f);
    }

    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }

    public Point(Point p) {
        this.x = p.x;
        this.y = p.y;
    }

    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }

    public double distance(Point p) {
        return sqrt(pow(this.x - p.x, 2) + pow(this.y - p.y, 2));
    }

    public static double distance(Point a, Point b) {
        return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
    }

    @Override
    public String toString() {
        return x + " " + y;
    }
}