import java.util.Scanner;
import java.util.Arrays;

public class J02026 {

    public static void chk(int[] ans,int[] ori,int curr,int pos,int des){
        if(pos==des){
            for(int i : ans){
                System.out.print(i+" ");
            }
            System.out.println();
            return;
        }else{
            if(pos==0){
                for(int i=curr;i<ori.length;i++){
                    ans[pos] = ori[i];
                    chk(ans,ori,i,pos+1,des);
                }
            }else{
                for(int i=curr+1;i<ori.length;i++){
                    ans[pos] = ori[i];
                    chk(ans,ori,i,pos+1,des);
                }
            }
            
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int k = sc.nextInt();
            int[] ori = new int[n];
            int[] ans = new int[k];
            for(int i=0;i<n;i++){
                ori[i] = sc.nextInt();
            }
            Arrays.sort(ori);
            chk(ans,ori,0,0,k);
        }
    }
}
