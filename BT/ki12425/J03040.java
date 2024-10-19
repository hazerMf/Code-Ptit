import java.util.Scanner;

public class J03040 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-->0){
            String s = sc.nextLine();
            if(ch1(s)||ch2(s)||ch3(s)||ch4(s)){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }

    private static boolean ch1(String s){
        if((s.charAt(5)-'0')>=(s.charAt(6)-'0')){
            return false;
        }else if((s.charAt(6)-'0')>=(s.charAt(7)-'0')){
            return false;
        }else if((s.charAt(7)-'0')>=(s.charAt(9)-'0')){
            return false;
        }else if((s.charAt(9)-'0')>=(s.charAt(10)-'0')){
            return false;
        }else return true;
    }
    private static boolean ch2(String s){
        if(s.charAt(5)==s.charAt(6)&&s.charAt(6)==s.charAt(7)&&s.charAt(7)==s.charAt(9)&&s.charAt(9)==s.charAt(10)){
            return true;
        }else return false;
    }
    private static boolean ch3(String s){
        if(s.charAt(5)==s.charAt(6)&&s.charAt(6)==s.charAt(7)&&s.charAt(9)==s.charAt(10)){
            return true;
        }else return false;
    }
    private static boolean ch4(String s){
        if(s.charAt(5)!='6'&&s.charAt(5)!='8'){
            return false;
        }else if(s.charAt(6)!='6'&&s.charAt(6)!='8'){
            return false;
        }else if(s.charAt(7)!='6'&&s.charAt(7)!='8'){
            return false;
        }else if(s.charAt(9)!='6'&&s.charAt(9)!='8'){
            return false;
        }else if(s.charAt(10)!='6'&&s.charAt(10)!='8'){
            return false;
        }else return true;
    }
}
