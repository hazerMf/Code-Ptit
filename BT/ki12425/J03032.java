import java.util.Scanner;

public class J03032 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = Integer.parseInt(sc.nextLine());
        while (T-- > 0) {
            String[] ar = sc.nextLine().trim().split("\\s+");
            for (String i : ar) {
                String nstr="";
                for (int j=0; j<i.length(); j++){
                    Character ch= i.charAt(j); 
                    nstr= ch+nstr;
                }
                System.out.print(nstr + " ");
            }
            System.out.println();
        }
    }
}