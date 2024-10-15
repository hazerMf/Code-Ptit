import java.util.Scanner;
import java.util.TreeSet;
import java.util.Set;
import java.util.Arrays;
import java.util.Collections;
import java.util.Vector;
public class tudainhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Vector<String> v = new Vector<String>();
        while(sc.hasNext()){
            v.add(sc.next());
        }
        String ans = "";
        int len = 0;
        for(String i:v){
            if(i.length()>len){
                ans = i;
                len = i.length();
            }
        }
        System.out.println(ans + " - " + len);
    }
}
