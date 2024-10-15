import java.util.Scanner;
public class J01009 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        long sum = 1;
        long mul = 1;
        for(int i =2;i<=a;i++){
            mul = mul*i;
            sum = sum + mul;
        }
        System.out.println(sum);
    }
}
