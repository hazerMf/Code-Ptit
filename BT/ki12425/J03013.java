import java.util.Scanner;

import java.math.BigInteger;

public class J03013 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            BigInteger A = sc.nextBigInteger();
            BigInteger B = sc.nextBigInteger();
            BigInteger C = A.subtract(B).abs();
            System.out.println(C.toString());
        }
    }
}