import java.util.Scanner;
import java.util.Vector;
public class J02104 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Vector<Integer> v = new Vector<>();
        int t = sc.nextInt();
        for(int i=1;i<=t;i++){
            for(int j=1;j<=t;j++){
                int x = sc.nextInt();
                if(x==1&&i<j){
                    v.add(i);
                    v.add(j);
                }
            }
        }
        for(int i=0;i<v.size();i+=2){
            System.out.println("("+v.get(i)+","+v.get(i+1)+")");
        }
    }
}
