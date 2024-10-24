import java.util.Arrays;
import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;

public class J07034 {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc = new Scanner(new File("MONHOC.in"));
        int t = Integer.parseInt(sc.nextLine());
        MonHoc[] l = new MonHoc[t];
        for(int i=0;i<t;i++){
            String a = sc.nextLine();
            String b = sc.nextLine();
            String c = sc.nextLine();
            l[i] = new MonHoc(a,b,c);
        }
        Arrays.sort(l);
        for (MonHoc i : l) {
            System.out.println(i);
        }
        sc.close();
    }
}

class MonHoc implements Comparable<MonHoc> {
    private String ma,ten,tinChi;

    MonHoc(String a,String b,String c){
        this.ma=a;
        this.ten=b;
        this.tinChi=c;
    }

    public String getTen(){
        return this.ten;
    }

    @Override 
    public String toString(){
        return ma+" "+ten+" "+tinChi;
    }

    @Override
    public int compareTo(MonHoc o) {
        return ten.compareTo(o.getTen());
    }
}