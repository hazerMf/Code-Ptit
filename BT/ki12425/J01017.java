import java.util.Scanner;
public class J01017 {
    static void chk(String s){
        for (int i = 1; i < s.length(); i++){
            int c1 = Integer.parseInt(String.valueOf(s.charAt(i)));  
            int c2 = Integer.parseInt(String.valueOf(s.charAt(i-1)));
            if(Math.abs(c2-c1)!=1){
                System.out.println("NO");
                return;
            }
        }
        System.out.println("YES");
        
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