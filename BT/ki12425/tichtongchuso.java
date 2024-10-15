import java.util.Scanner;
public class tichtongchuso {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int run = sc.nextInt();
        sc.nextLine();
        while(run-- > 0){
            String s = sc.nextLine();
            cal(s);
        }
    }
    static void cal(String s){
        long tich = 1;
        long tong = 0;
        for(int i = 0;i<s.length();i++){
            if(i%2==0){
                long temp = s.charAt(i) - '0';
                if(temp!=0) tich *= temp;
            }else{
                long temp = s.charAt(i) - '0';
                tong += temp;
                
            }
        }
        System.out.println(tich + " " + tong);
    }
}
