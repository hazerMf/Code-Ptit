import java.util.Scanner;
public class J01014 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int runs=0;runs<n;runs++){
            long x = sc.nextLong();
            long ans = 2;
            if(x%2==0){
                while(x%2==0){
                    x/=2;
                }
            }
            for(long i=3;i*i<=x;i+=2){
                if(x%i==0){
                    ans = i;
                    while(x%i==0){
                        x/=i;
                    }
                }
            }
            if(x>1) ans=x;
            System.out.println(ans);
        }
    }
}