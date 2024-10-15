import java.util.Scanner;
import java.util.Set;
import java.util.Arrays;
import java.util.TreeSet;
public class taphopsonguyen {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        sc.nextLine();
        String la = sc.nextLine();
        String lb = sc.nextLine();
        String a[] = la.split("\\s+");
        String b[] = lb.split("\\s+");
        Set<String> sa = new TreeSet<>(Arrays.asList(a));
        Set<String> sb = new TreeSet<>(Arrays.asList(b));
        Set<String> a1 = sa;
        Set<String> b1 = sb;
        a1.retainAll(b1);
        for(String i:a1){
            System.out.print(i+" ");
        }
        System.out.println();
        Set<String> a2 = new TreeSet<>(Arrays.asList(a));
        a2.removeAll(b1);
        for(String i:a2){
            System.out.print(i+" ");
        }
        System.out.println();
        b1.removeAll(a1);
        for(String i:b1){
            System.out.print(i+" ");
        }
        System.out.println();
    }
}
