import java.util.Scanner;

public class palin {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int t = sc.nextInt();
        sc.nextLine();
        while(t-->0){
            String in = sc.nextLine();
            StringBuilder sb = new StringBuilder(in);
            sb = sb.reverse();
            System.out.println(sb.toString().equals(in) ? "Yes" : "No");
        }
    }
}
