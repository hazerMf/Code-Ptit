import java.util.Scanner;
public class sotamphan {
    static boolean chk(String s){
        for(int i = 0;i<s.length();i++){
            if(s.charAt(i)!='0'&&s.charAt(i)!='1'&&s.charAt(i)!='2') return false;
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