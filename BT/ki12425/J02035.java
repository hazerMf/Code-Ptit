import java.util.Scanner;

public class J02035 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int len = sc.nextInt();
            int[] l = new int[len];
            int ans = 0;
            for(int i=0;i<len;i++){
                if(i==0){
                    l[i] = sc.nextInt();
                }else{
                    l[i] = sc.nextInt();
                    if(l[i]<l[i-1]) ans = i;
                }
            }
            System.out.println(ans);
        }
    }
}
