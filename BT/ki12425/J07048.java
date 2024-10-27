import java.io.File;
import java.io.FileNotFoundException;
import java.util.Arrays;
import java.util.Scanner;

public class J07048 {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("SANPHAM.in"));
        int t = Integer.parseInt(sc.nextLine());
        sp[] l = new sp[t];
        for(int i=0;i<t;i++){
            l[i] = new sp(sc.nextLine(),sc.nextLine(),Integer.parseInt(sc.nextLine()),Integer.parseInt(sc.nextLine()));
        }
        Arrays.sort(l);
        for(sp i: l){
            System.out.println(i);
        }
    }
}

class sp implements Comparable<sp>{
    private String ma,ten;
    private int gia,thoihan;
    sp(String a,String b,int c,int d){
        this.ma = a;
        this.ten = b;
        this.gia = c;
        this.thoihan = d;
    }

    public int getGia(){
        return gia;
    }

    public String getMa(){
        return this.ma;
    }

    @Override
    public String toString(){
        return this.ma+" "+this.ten+" "+this.gia+" "+this.thoihan;
    }

    @Override
    public int compareTo(sp o) {
        if(this.gia==o.getGia()){
            return ma.compareTo(o.getMa());
        }else return -(gia-o.getGia());
    }

}