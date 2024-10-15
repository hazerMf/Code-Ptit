import java.util.Scanner;
public class solienke {
    static boolean chk(String s){
        for(int i = 1;i<s.length();i++){
            int a = Integer.valueOf(s.charAt(i));
            int b = Integer.valueOf(s.charAt(i-1));
            if(Math.abs(a-b)!=1) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String runs = sc.nextLine();
        int run = Integer.valueOf(runs);
        for(int ab=0;ab<run;ab++){
            String s = sc.nextLine();
            if(chk(s)){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }
}
