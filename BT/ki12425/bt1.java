import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.HashSet;
import java.math.BigInteger;

public class bt1 {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc = new Scanner(new File("DATA.in"));
        HashSet<String> h = new HashSet<>();
        while(sc.hasNext()){
            String s = sc.nextLine();
            String num[] = s.split("\\s+");
            for(String i:num){
                if(i.length()>0) h.add(i);
            }
        }
        BigInteger sum = new BigInteger("0");
        BigInteger mul = new BigInteger("1");
        for(String i:h){
            sum = sum.add(new BigInteger(i));
            mul = mul.multiply(new BigInteger(i));
        }
        System.out.println(sum);
        System.out.println(mul);
    }
}
