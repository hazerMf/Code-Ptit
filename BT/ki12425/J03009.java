import java.util.Scanner;
import java.util.TreeSet;
import java.util.Set;
import java.util.Arrays;
public class J03009 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            String s1 = sc.nextLine();
            String s2 = sc.nextLine();
            String []s1arr = s1.split("\\s+");
            String []s2arr = s2.split("\\s+");
            Set<String> se1 = new TreeSet<>(Arrays.asList(s1arr));
            Set<String> se2 = new TreeSet<>(Arrays.asList(s2arr));
            se1.removeAll(se2);
            for(String s : se1){
                System.out.print(s + " ");
            }
            System.out.println();
        }
    }
}
