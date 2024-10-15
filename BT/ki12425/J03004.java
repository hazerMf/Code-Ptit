import java.util.Scanner;

public class J03004 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            String name = sc.nextLine();
            System.out.println(fix(name));
        }
    }
    private static String fix(String s){
        String[] w=s.split("\\s+");
        StringBuilder sb = new StringBuilder();
        for(String a:w){
            if(a.length()>0){
                sb.append(Character.toUpperCase(a.charAt(0)));
                sb.append(a.substring(1).toLowerCase());
                sb.append(" ");
            }
        }
        return sb.toString().trim();
    }
}
