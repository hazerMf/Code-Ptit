import java.util.Scanner;
public class J01002 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for (int i = 0;i < n;i++){
            long a = input.nextInt();
            long sum = (1+a)*a/2;
            System.out.println(sum);
        }
    }
}
