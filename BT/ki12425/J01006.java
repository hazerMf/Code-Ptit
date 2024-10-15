import java.util.Scanner;
public class J01006 {

    static long fibo(int n){
        if(n == 1 || n == 2) return 1;
        long f1 = 1,f2 = 1,fn = 0; 
        for(int i = 3;i <= 92;i++){
            fn = f1 + f2;
            if(i == n) break; 
            f2 = f1;
            f1 = fn; 
        }
        return fn; 
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt(); 
        for(int i = 1;i <= t;i++){
            int n = sc.nextInt(); 
            System.out.println(fibo(n));
        }
    }
}
