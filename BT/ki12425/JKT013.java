import java.util.Scanner;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.LinkedList;
import java.util.Queue;
import java.util.ArrayList;

public class JKT013 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            ArrayList<Long> ans = new ArrayList<>();
            Queue<String> q = new LinkedList<>();
            q.add("8");
            q.add("6");
            while(!q.isEmpty()){
                String temp = q.remove();
                if(temp.length()>n){
                    break;
                }
                ans.add(Long.parseLong(temp));
                q.add(temp+"6");
                q.add(temp+"8");
            }
            Collections.sort(ans);
            Collections.reverse(ans);
            System.out.println(ans.size());
            for(long i:ans){
                System.out.print(i+" ");
            }
            System.out.println();
        }
    }
}
