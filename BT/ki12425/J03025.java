import java.util.Scanner;
public class J03025 {
    static void chk(String s){
        int cnt = 0;
        for(int i=0;i<s.length()/2;i++){
            if(s.charAt(i)!=s.charAt(s.length()-i-1)) cnt++;
        }
        if(cnt==1){
            System.out.println("YES");
            return;
        }else if(cnt==0&&s.length()%2==1){
            System.out.println("YES");
            return;
        }else{
            System.out.println("NO");
            return;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-->0){
            String s = sc.nextLine();
            chk(s);
        }
    }
}
