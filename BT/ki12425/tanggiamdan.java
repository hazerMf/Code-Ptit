import java.util.Scanner;
import java.util.Collections;
import java.util.Vector;
import java.util.TreeSet;
import java.util.Set;
import java.util.Comparator;
public class tanggiamdan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int run = sc.nextInt();
        while(run-->0){
            int len = sc.nextInt();
            int l[] = new int[len];
            for(int i=0;i<len;i++) l[i] = sc.nextInt();
            Set<Integer> even = new TreeSet<>();
            Set<Integer> odd = new TreeSet<>(Comparator.reverseOrder());
            for(int i : l){
                if(i%2==0){
                    even.add(i);
                }else{
                    odd.add(i);
                }
            }
            for(int i : even){
                System.out.print(i+" ");
            }
            System.out.println();
            for(int i : odd){
                System.out.print(i+" ");
            }
            System.out.println();
        }
    }
}
