import java.util.Scanner;
import java.util.Stack;

public class J03019 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String l = sc.nextLine();
        Stack<Character> st = new Stack<Character>();
        st.push(l.charAt(0));
        for(int i=1;i<l.length();i++){
            if(st.peek()<l.charAt(i)){
                while(!st.isEmpty()&&st.peek()<l.charAt(i)){
                    st.pop();
                }
            }
            st.push(l.charAt(i));
        }
        StringBuilder sb = new StringBuilder();
        for(Character i : st){
            sb.append(i);
        }
        System.out.println(sb.toString());
    }
}
