import java.util.Scanner;
import java.util.Arrays;

public class J05030 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        sv[] l = new sv[t];
        for(int i=0;i<t;i++){
            l[i] = new sv(sc.nextLine(),sc.nextLine(),sc.nextLine(),sc.nextFloat(),sc.nextFloat(),sc.nextFloat());
            sc.nextLine();
        }
        Arrays.sort(l);
        int cnt = 1;
        for(sv i:l){
            System.out.print(cnt);
            System.out.print(" ");
            System.out.println(i);
            cnt++;
        }
    }
}


class sv implements Comparable<sv>{
    String ma,ten,lop;
    Float d1,d2,d3;

    sv(String a,String b,String c,Float d,Float e,Float f){
        this.ma = a;
        this.ten = b;
        this.lop = c;
        this.d1 = d;
        this.d2 = e;
        this.d3 = f;
    }

    @Override
    public String toString(){
        return ma+" "+ten+" "+lop+" "+String.format("%.1f %.1f %.1f",d1,d2,d3);
    }

    @Override
    public int compareTo(sv o){
        return this.ma.compareTo(o.ma);
    }
}