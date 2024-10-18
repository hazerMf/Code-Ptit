

import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;
import java.io.File;

public class bai7 {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc = new Scanner(new File("VANBAN.in"));
        ArrayList<String> s = new ArrayList<>();
        Set<String> st = new HashSet<>();
        while(sc.hasNext()){
            String temp = sc.next();
            if(temp.contains("1")&&temp.contains("2")&&temp.contains("3")&&temp.contains("4")&&temp.contains("5")&&temp.contains("6")&&temp.contains("7")&&temp.contains("8")&&temp.contains("9")&&temp.contains("0")){
                if(temp.contains(",")&&temp.contains(".")&&temp.contains("!")&&temp.contains("?")&&temp.contains(":")){
                    continue;
                }else{
                    st.add(temp);
                }
            }
        }
        for(String i : st){
            s.add(i);
        }
        Collections.sort(s);
        for(String i : s){
            System.out.println(i);
        }
    }
}
