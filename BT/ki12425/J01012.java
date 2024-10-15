import java.util.Scanner;
public class J01012 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int j = 0 ;j<t;j++){
            int x = sc.nextInt();
            int ans = 0;
            for(int i=1;i*i<=x;i++){
                if(x%i==0) {
                    if(i%2==0) ans++;
                    if((x/i)%2==0) ans++;
                    if(i*i==x&&i%2==0) ans--;
                }
            }
            System.out.println(ans); 
        }
        
    }
}
