package thuchanh;

import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Scanner;
import java.io.File;

public class bai4 {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc = new Scanner(new File("DAYSO.in"));
        int n = sc.nextInt();
        ArrayList<BigInteger> a = new ArrayList<>();
        for(int i=0;i<n;i++){
            BigInteger x = new BigInteger(sc.next());
            a.add(x);
        }
        a.sort((d,f) -> d.compareTo(f));
        BigInteger sum = new BigInteger("0");
        for(BigInteger i:a){
            sum = sum.add(i);
        }
        System.out.println(a.get(0));
        System.out.println(a.get(n-1));
        System.out.println(sum);
    }
}
