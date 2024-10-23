import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.Arrays;

public class J07033 {
    public static String fix(String s) {
        String res = "";
        String[] list = s.trim().split("\\s+");
        for (int i = 0; i < list.length; i++) {
            res += list[i].substring(0, 1).toUpperCase() + list[i].substring(1).toLowerCase();
            if (i != list.length - 1) {
                res += " ";
            }
        }
        return res;
    }
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("SINHVIEN.in"));
        int t = sc.nextInt();
        sc.nextLine();
        SV[] l = new SV[t];
        for(int i=0;i<t;i++){
            String a = sc.nextLine();
            String b = sc.nextLine();
            String c = sc.nextLine();
            String d = sc.nextLine();
            l[i] = new SV(a,fix(b),c,d);
        }
        Arrays.sort(l);
        for (SV i : l) {
            System.out.println(i);
        }
    }
}

class SV implements Comparable<SV> {
    private String msv,ten,lop,email;

    SV(String a,String b,String c,String d){
        this.msv = a;
        this.ten = b;
        this.lop = c;
        this.email = d;
    }

    public String getMsv(){
        return this.msv;
    }

    @Override
    public String toString(){
        return msv+" "+ten+" "+lop+" "+email;
    }

    @Override
    public int compareTo(SV o) {
        return msv.compareTo(o.getMsv());
    }
}