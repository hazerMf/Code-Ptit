import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.TreeSet;


public class bt4 {
    public static void main(String[] args) throws IOException,FileNotFoundException,ClassNotFoundException {
        ObjectInputStream o1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ArrayList<String> data1 = (ArrayList<String>) o1.readObject();

        ObjectInputStream o2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList<Integer> data2 = (ArrayList<Integer>) o2.readObject();

        TreeSet<String> set = new TreeSet<>();
        for(String i:data1){
            for(Integer j:data2){
                set.add(i+j);
            }
        }
        for(String i:set){
            System.out.println(i);
        }
    }
}
