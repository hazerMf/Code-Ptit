import java.util.Scanner;
import java.util.Arrays;

public class J05035 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        sv[] l = new sv[t];
        for(int i=0;i<t;i++){
            l[i] = new sv(sc.nextLine(),sc.nextLine(),sc.nextLine(),sc.nextLine(),sc.nextLine());
        }
        Arrays.sort(l);
        t = sc.nextInt();
        sc.nextLine();
        while(t-->0){
            String ans = sc.nextLine();
            for(sv i:l){
                if(i.dn.equals(ans)) System.out.println(i);
            }
        }
    }
}


class sv implements Comparable<sv>{
    String ma,ten,lop,email,dn;
    int stt;
    static int cnt = 1;

    sv(String a,String b,String c,String d,String e){
        this.stt = cnt++;
        this.ma = a;
        this.ten = b;
        this.lop = c;
        this.email = d;
        this.dn = e;
    }

    @Override
    public String toString(){
        return stt+" "+ma+" "+ten+" "+lop+" "+email+" "+dn;
    }

    @Override
    public int compareTo(sv o){
        return this.ma.compareTo(o.ma);
    }
}