import java.util.Scanner;
import java.util.TreeSet;
import java.util.Set;
public class J02005 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextShort();
        int b = sc.nextShort();
        Set<Short> la = new TreeSet<Short>();
        Set<Short> lb = new TreeSet<Short>();
        for(int i=0;i<a;i++){
            la.add(sc.nextShort());
        }
        for(int i=0;i<b;i++){
            lb.add(sc.nextShort());
        }
        la.retainAll(lb);
        for(int i : la){
            System.out.print(i+" ");
        }
    }
}
