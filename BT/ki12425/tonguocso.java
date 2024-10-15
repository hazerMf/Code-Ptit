import java.util.Scanner;
public class tonguocso {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int sum = 0;
        for(int run=0;run<n;run++){
            int a = sc.nextInt();
            int e = 2;
            while(a!=1){
                if(a%e==0){
                    while(a%e==0){
                        a = a/e;
                        sum = sum + e;
                    }
                }
                e+=1;
            }
        }
        System.out.println(sum);
    }
}