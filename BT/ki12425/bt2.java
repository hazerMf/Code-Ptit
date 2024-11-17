import java.io.*;
import java.util.*;

public class bt2 {
    public static void main(String[] args) throws IOException,ClassNotFoundException{
        ObjectInputStream in = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<String> a = (ArrayList<String>) in.readObject();
        ArrayList<Integer> arr = new ArrayList<>();
        Set<Integer> se = new HashSet<>();
        for(String str : a){
            String[] words = str.trim().split("\\s+");
            for(String word:words){
                try{
                    int x=Integer.parseInt(word);
                    if(!se.contains(x)){
                        arr.add(x);
                        se.add(x);
                    }
                }catch (NumberFormatException e){

                }
            }
        }
        Collections.sort(arr);
        for(int x:arr){
            System.out.println(x);
        }
    }
}
