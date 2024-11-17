import java.util.Scanner;

public class J03022 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = "";
        while(sc.hasNextLine()){
            s += sc.nextLine();
        }
        String[] l = s.trim().toLowerCase().split("[.?!]");
        for(String a : l){
            a = a.trim();
            a = Character.toString(a.charAt(0)).toUpperCase() + a.substring(1);
            for (String j : a.split("\\s+"))
                System.out.printf("%s ", j);
            System.out.println();
        }
    }
}
