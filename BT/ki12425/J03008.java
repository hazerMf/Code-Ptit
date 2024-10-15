import java.util.Scanner;
public class J03008 {
    static void chk(String s){
        for(int i=0;i<s.length()/2;i++){
            char temp = s.charAt(i);
            if(temp!='2'&&temp!='3'&&temp!='5'&&temp!='7'){
                System.out.println("NO");
                return;
            }
            if(s.charAt(i)!=s.charAt(s.length()-i-1)){
                System.out.println("NO");
                return;
            }
        }
        System.out.println("YES");
        return;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int temp = sc.nextInt();
        while(temp-- > 0){
            String s = sc.next();
            chk(s);
        }
    }
}
