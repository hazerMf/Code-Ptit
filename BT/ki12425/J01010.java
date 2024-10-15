import java.util.Scanner;
public class J01010 {
    public static void sol(String s){
        StringBuilder sb = new StringBuilder();
        boolean first = true;
        for(int i=0;i<s.length();i++){
            char temp = s.charAt(i);
            if(temp!='1'&&temp!='8'&&temp!='9'&&temp!='0'){
                System.out.println("INVALID");
                return;
            }else{
                if(temp=='1'){
                    sb.append('1');
                    first = false;
                }else if(temp == '8' || temp =='9' || temp =='0'){
                    if(!first) sb.append('0');
                }
            }
        }
        if(sb.length()>0){
            System.out.println(sb.toString());
            return;
        }else{
            System.out.println("INVALID");
            return;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-->0){
            String s = sc.nextLine();
            sol(s);
        }
    }
}
