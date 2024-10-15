import java.util.Scanner;
public class J03007 {
    static void chk(String s){
        if(s.charAt(0)!='8'){
            System.out.println("NO");
            return;
        }
        int sum = 0;
        for(int i=0;i<s.length();i++){
            sum = sum + Character.getNumericValue(s.charAt(i));
            
            if(s.charAt(i)!=s.charAt(s.length()-i-1)){
                System.out.println("NO");
                return;
            }
        }
        if(sum%10==0){
            System.out.println("YES");
            return;
        }else{
            System.out.println("NO");
            return;
        }
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
