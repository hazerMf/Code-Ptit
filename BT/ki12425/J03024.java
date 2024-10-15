import java.util.Scanner;
public class J03024 {
    static void chk(String s){
        int le=0;
        for(int i=0;i<s.length();i++){
            if(!Character.isDigit(s.charAt(i))){
                System.out.println("INVALID");
                return;
            }
            int temp = s.charAt(i) - '0';
            if(temp%2==1){
                le++;
            }
        }
        if(s.length()%2==1 && le > (s.length()-le)){
            System.out.println("YES");
            return;
        }else if(s.length()%2==0 && le < (s.length()-le)){
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
