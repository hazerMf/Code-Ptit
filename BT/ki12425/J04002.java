import java.util.Scanner;

public class J04002 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double h = sc.nextDouble();
        double w = sc.nextDouble();
        String c = sc.next();
        if(h>0&&w>0){
            Rectangle a = new Rectangle(h,w,c);
            System.out.println(a);
        }else{
            System.out.println("INVALID");
        }
    }
}


class Rectangle {

    private double width, height;
    private String color;

    public Rectangle() {
        width = 1;
        height = 1;
    }

    public Rectangle(double width, double height, String color) {
        this.width = width;
        this.height = height;
        this.color = color;
    }

    public String getColor() {
        return color.substring(0, 1).toUpperCase() + color.substring(1).toLowerCase();
    }

    public double findArea() {
        return width * height;
    }

    public double findPerimeter() {
        return 2 * (width + height);
    }

    @Override
    public String toString() {
        return String.format("%d %d %s", (int) findPerimeter(), (int) findArea(), getColor());
    }
}