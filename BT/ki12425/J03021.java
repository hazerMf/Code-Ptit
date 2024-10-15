import java.util.Scanner;
public class J03021 {
    static void chk(String s){
        for(int i=0;i<s.length()/2;i++){
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
        int t = sc.nextInt();
        sc.nextLine();
        while(t-->0){
            StringBuilder sb = new StringBuilder();
            String s = sc.nextLine();
            for(int i = 0;i<s.length();i++){
                char temp = Character.toUpperCase(s.charAt(i));
                if(temp=='A'||temp=='B'||temp=='C'){
                    sb.append('2');
                }else if(temp=='D'||temp=='E'||temp=='F'){
                    sb.append('3');
                }else if(temp=='G'||temp=='H'||temp=='I'){
                    sb.append('4');
                }else if(temp=='J'||temp=='K'||temp=='L'){
                    sb.append('5');
                }else if(temp=='M'||temp=='N'||temp=='O'){
                    sb.append('6');
                }else if(temp=='P'||temp=='Q'||temp=='R'||temp=='S'){
                    sb.append('7');
                }else if(temp=='T'||temp=='U'||temp=='V'){
                    sb.append('8');
                }else if(temp=='W'||temp=='X'||temp=='Y'||temp=='Z'){
                    sb.append('9');
                }
            }
            chk(sb.toString());
        }
    }
}
