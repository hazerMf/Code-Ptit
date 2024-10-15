import java.util.*;

public class sapxeptheothutu {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while(t-->0){
            int n = sc.nextInt();
            Map<Integer,Integer> mp = new HashMap<>();
            Map<Integer,Integer> info = new HashMap<>();
            List<Integer> list = new ArrayList<>();
            for(int i=0;i<n;i++){
                int x = sc.nextInt();
                list.add(x);
                mp.put(x,mp.getOrDefault(x,0)+1);
                if(!info.containsKey(x)) info.put(x,i);
            }
            list.sort((a,b)->{
                int cmp = mp.get(b).compareTo(mp.get(a));
                if(cmp==0){
                    return Integer.compare(info.get(a),info.get(b));
                }
                return cmp;
            });
            list.forEach((a)->System.out.print(a+" "));
            System.out.println();
        }
    }
}
