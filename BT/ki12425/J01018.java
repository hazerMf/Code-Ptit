import java.util.Scanner;
public class J01018 {
    static void chk(String s){
        int sum = Integer.parseInt(String.valueOf(s.charAt(0)));  
        for (int i = 1; i < s.length(); i++){
            int c1 = Integer.parseInt(String.valueOf(s.charAt(i)));  
            int c2 = Integer.parseInt(String.valueOf(s.charAt(i-1)));
            sum = sum + c1;
            if(Math.abs(c2-c1)!=2){
                System.out.println("NO");
                return;
            }
        }
        
        if(sum%10==0) System.out.println("YES");
        else System.out.println("NO");
        
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String runs = sc.nextLine();
        int run = Integer.valueOf(runs);
        for(int j=0;j<run;j++){
            String s = sc.nextLine();
            chk(s);
        }
    }
}