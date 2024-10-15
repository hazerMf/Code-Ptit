import java.util.Scanner;
public class J01004 {
    static boolean chk(int a){
        if(a==0||a==1){
            return false;
        }
        for(int i=2;i<=Math.sqrt(a);i++){
            if(a%i==0){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0;i<n;i++){
            int a = sc.nextInt();
            if(chk(a)){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }
}
