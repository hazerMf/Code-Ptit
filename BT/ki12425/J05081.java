import java.util.Scanner;
import java.util.Arrays;

public class J05081 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        hang[] l = new hang[t];
        for(int i=0;i<t;i++){
            l[i] = new hang(sc.nextLine(),sc.nextLine(),sc.nextInt(),sc.nextInt());
            sc.nextLine();
        }
        Arrays.sort(l);
        for(hang i : l){
            System.out.println(i);
        }
    }
}

class hang implements Comparable<hang>{
    private static Integer cnt=1;
    private String ma,ten,dv;
    private int mua,ban,loiNhuan;

    hang(String a,String b,int c,int d){
        this.ma = "MH" + String.format("%03d",cnt++);
        this.ten = a;
        this.dv = b;
        this.mua = c;
        this.ban = d;
        this.loiNhuan = this.ban - this.mua;
    }

    public int getLoiNhuan(){
        return this.loiNhuan;
    }

    public String getMa(){
        return this.ma;
    }

    @Override
    public String toString(){
        return ma+" "+ten+" "+dv+" "+mua+" "+ban+" "+loiNhuan;
    }

    @Override
    public int compareTo(hang o){
        if(this.loiNhuan == o.getLoiNhuan()){
            return this.ma.compareTo(o.getMa());
        }
        return -(this.loiNhuan-o.getLoiNhuan());
    }
}