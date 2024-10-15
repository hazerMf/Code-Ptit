import java.util.*;

public class J02007 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i=1;i<=t;i++){
            int n = sc.nextInt();
            Map<Integer,Integer> mp = new HashMap<>();
            Set<Integer> s = new LinkedHashSet<>();
            for(int j=0;j<n;j++){
                int x = sc.nextInt();
                mp.put(x,mp.getOrDefault(x,0)+1);
                s.add(x);
            }
            System.out.println("Test "+i+":");
            for (int x : s) {
                System.out.println(x + " xuat hien " + mp.get(x) +  " lan" ); 
            }
            System.out.println();
        }
    }
}