import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.List;
import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

public class J07032 {

    public static boolean chk(String s){
        StringBuilder sb = new StringBuilder(s).reverse();
        if (!sb.toString().equals(s)) {
            return false;
        }

        if (s.length() % 2 == 0 || s.length() == 1) {
            return false;
        }
        for (int i = 0; i < s.length(); i++) {
            if ((s.charAt(i) - '0') % 2 == 0) {
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) throws IOException, ClassNotFoundException{
        ObjectInputStream in1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream in2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        List<Integer> l1 = (List<Integer>) in1.readObject();
        List<Integer> l2 = (List<Integer>) in2.readObject();

        int[] dd = new int[1000001];

        for (Integer x : l1) {
            if (chk(x.toString()) && l2.contains(x)) {
                dd[x]++;
            }
        }

        for (Integer x : l2) {
            if (chk(x.toString()) && dd[x] != 0) {
                dd[x]++;
            }
        }

        int dem = 0;
        for (int i = 0; i <= 1000000; i++) {
            if (dd[i] > 0) {
                System.out.println(i + " " + dd[i]);
                dem++;
            }
            if (dem == 10) {
                break;
            }
        }
    }
}
