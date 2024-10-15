import java.util.Scanner;
public class J01003 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        float a = input.nextFloat();
        float b = input.nextFloat();
        if(a==0 & b==0){
            System.out.println("VSN");
        }else if (a==0 & b!=0) {
            System.out.println("VN");
        }else{
            double ans = -b/a;
            String finans = String.format("%.02f", ans);
            System.out.println(finans);
        }
    }
}
