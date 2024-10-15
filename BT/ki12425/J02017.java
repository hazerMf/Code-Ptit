import java.util.Scanner;
import java.util.Stack;
public class J02017 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Stack<Integer> st = new Stack<>();
        int x;
        while(n-->0){
            x = sc.nextInt();
            if(!st.empty()&&(x+st.peek())%2==0){
                st.pop();
            }else st.push(x);
        }
        System.out.println(st.size());
    }
}
