import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Arrays;
import java.util.Date;

public class J07084 {
    public static void main(String[] args) throws FileNotFoundException, ParseException {
        // Corrected date format
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy HH:mm:ss");
        Scanner sc = new Scanner(new File("ONLINE.in"));
        int t = sc.nextInt();
        sc.nextLine();
        sv[] l = new sv[t];
        for (int i = 0; i < t; i++) {
            String ten = sc.nextLine();
            Date start = sdf.parse(sc.nextLine());
            Date end = sdf.parse(sc.nextLine());
            l[i] = new sv(ten, start, end);
        }
        Arrays.sort(l);
        for (sv i : l) {
            System.out.println(i);
        }
    }
}

class sv implements Comparable<sv> {
    String ten;
    long tg;

    sv(String a, Date b, Date c) {
        this.ten = a;
        this.tg = (c.getTime() - b.getTime()) / (1000L * 60);
    }

    @Override
    public String toString() {
        return ten + " " + tg;
    }

    @Override
    public int compareTo(sv o) {
        if(this.tg == o.tg) return this.ten.compareTo(o.ten);
        return this.tg > o.tg ? -1 : 1;
    }
}