import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Scanner;

public class J07022 {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
        ArrayList<String> ans = new ArrayList<String>();
        while(sc.hasNext()){
            String[] l = sc.nextLine().trim().split("\\s+");
            for(String i : l){
                try{
                    Integer.parseInt(i);
                }catch (Exception e){
                    ans.add(i);
                }
            }
        }
        ans.sort(String::compareTo);
        for(String i :ans){
            System.out.print(i+" ");
        }
    }
}
