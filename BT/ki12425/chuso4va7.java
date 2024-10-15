import java.util.Scanner;
public class chuso4va7 {
    static void chk(String s){
        int c = 0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='4'||s.charAt(i)=='7') c++;
        }
        if(c==4||c==7) System.out.println("YES");
        else System.out.println("NO");
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        chk(s);
    }
} 