import java.util.Scanner;
public class J01016 {
    static void chk(String s){
        int cnt = 0;
        for (int i = 0; i < s.length(); i++){
            char c = s.charAt(i);        
            if(c=='7'||c=='4'){
                cnt+=1;
            }
        }
        if(cnt==4||cnt==7) System.out.println("YES");
        else System.out.println("NO");
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        chk(s);
    }
}
