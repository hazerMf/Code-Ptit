import java.util.Scanner;
import java.util.Stack;

public class J08021 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            String s = sc.next();
            Stack<Character> st = new Stack<>();
            st.push(')');
            int max_len = 0;
            int temp_len = 0;
            for (int i = 0; i < s.length(); i++) {
                char k = s.charAt(i);
                if(k=='('){
                    st.push(k);
                }else{
                    if(st.peek()!='('){
                        temp_len=0;
                        st.push(k);
                    }else{
                        st.pop();
                        temp_len+=2;
                        if(temp_len>max_len) max_len=temp_len; 
                    }
                }
            }
            System.out.println(max_len);
        }
    }
}