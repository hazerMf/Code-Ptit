import java.util.Scanner;
import java.util.Arrays;

public class bai3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        kh[] lkh = new kh[t];
        for(int i=0;i<t;i++){
            lkh[i] = new kh(sc.nextLine(),sc.nextLine(),sc.nextLine(),sc.nextLine());
        }
        t = Integer.parseInt(sc.nextLine());
        mh[] lmh = new mh[t];
        for(int i=0;i<t;i++){
            lmh[i] = new mh(sc.nextLine(),sc.nextLine(),Integer.parseInt(sc.nextLine()),Integer.parseInt(sc.nextLine()));
        }
        t = Integer.parseInt(sc.nextLine());
        hd[] lhd = new hd[t];
        for(int i=0;i<t;i++){
            lhd[i] = new hd(sc.next(),sc.next(),sc.nextInt());
        }
        for(hd i:lhd){
            for(kh j:lkh){
                if(j.ma.equals(i.mkh)){
                    i.setKH(j.ten,j.dc);
                }
            }
            for(mh j:lmh){
                if(j.ma.equals(i.mmh)){
                    i.setMH(j.ten,j.mua,j.ban);
                }
            }
        }
        Arrays.sort(lhd);
        for(hd i:lhd){
            System.out.println(i);
        }
    }
}

class kh{
    String ma,ten,gt,ns,dc;
    static int cnt = 1;

    kh(String a,String b,String c,String d){
        this.ma = String.format("KH%03d",cnt++);
        this.ten = a;
        this.gt = b;
        this.ns = c;
        this.dc = d;
    }
}

class mh{
    String ma,ten,dv;
    int mua,ban;
    static int cnt = 1;

    mh(String a,String b,int c,int d){
        this.ma = String.format("MH%03d",cnt++);
        this.ten = a;
        this.dv = b;
        this.mua = c;
        this.ban = d;
    }
}

class hd implements Comparable<hd>{
    String ma,mkh,mmh;
    int sl,loiNhuan;
    String tenkh,dckh;
    String tenmh;
    int mua,ban;
    static int cnt = 1;

    hd(String a,String b,int c){
        ma = String.format("HD%03d",cnt++);
        this.mkh = a;
        this.mmh = b;
        this.sl = c;
    }

    void setKH(String a,String b){
        this.tenkh = a;
        this.dckh = b;
    }

    void setMH(String a,int b,int c){
        this.tenmh = a;
        this.mua = b;
        this.ban = c;
        this.loiNhuan = (ban-mua)*sl;
    }

    @Override
    public String toString(){
        return ma+" "+tenkh+" "+dckh+" "+tenmh+" "+sl+" "+String.format("%d",sl*ban)+" "+loiNhuan;
    }

    @Override
    public int compareTo(hd o){
        return this.loiNhuan-o.loiNhuan;
    }
}