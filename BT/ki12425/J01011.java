import java.util.Scanner;

public class J01011 {
    static long gcd(long a, long b){
        long i;
        if (a < b)
            i = a;
        else
            i = b;
        for (i = i; i > 1; i--) {
            if (a % i == 0 && b % i == 0)
                return i;
        }
        return 1;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for (int i = 0;i < n;i++){
            long a = input.nextInt();
            long b = input.nextInt();
            long temp = gcd(b,a);
            System.out.println((a*b)/temp+" "+temp);
        }
    }
}
