import java.util.Scanner;

public class J05006 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        nv[] l = new nv[t];
        for(int i=0;i<t;i++){
            l[i]=new nv(sc.nextLine(),sc.nextLine(),sc.nextLine(),sc.nextLine(),sc.nextLine(),sc.nextLine());
        }
        for(nv i:l){
            System.out.println(i);
        }
    }
}

class nv{
    private String ma,ten,gt,ns,dc,mst,nkhd;
    private static int cnt = 1;

    static String toD(String s) {
        String[] d = s.split("/");
        for (int i = 0; i <= 1; i++) {
            while (d[i].length() < 2)
                d[i] = "0" + d[i];
        }
        return d[0] + "/" + d[1] + "/" + d[2];
    }

    static String stdName(String s) {
        String[] n = s.toLowerCase().trim().split("\\s+");
        String r = "";
        for (int i = 0; i < n.length; i++) {
            r = r + Character.toString(n[i].charAt(0)).toUpperCase() + n[i].substring(1) + " ";
        }
        return r;
    }

    nv(String a,String b,String c,String d,String e,String f){
        this.ma = String.format("%05d",cnt++);
        this.ten = stdName(a);
        this.gt = b;
        this.ns = toD(c);
        this.dc = d;
        this.mst = e;
        this.nkhd = toD(f);
    }

    @Override
    public String toString(){
        return ma+" "+ten+" "+gt+" "+ns+" "+dc+" "+mst+" "+nkhd;
    }
}