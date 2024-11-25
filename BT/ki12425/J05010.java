import java.util.Scanner;
import java.util.Arrays;

public class J05010 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        mh[] l = new mh[t];
        for(int i=0;i<t;i++){
            l[i] = new mh(sc.nextLine(),sc.nextLine(),sc.nextFloat(),sc.nextFloat());
            sc.nextLine();
        }
        Arrays.sort(l);
        for(mh i:l){
            System.out.println(i);
        }
    }
}

class mh implements Comparable<mh>{
    private String ten,nhom;
    private float loiNhuan;
    private int ma;
    private static int cnt = 1;

    mh(String a,String b,float c,float d){
        this.ma = cnt++;
        this.ten = a;
        this.nhom = b;
        this.loiNhuan = d-c;
    }

    public float getLoiNhuan(){
        return this.loiNhuan;
    }

    @Override
    public String toString(){
        return ma + " " + ten + " " + nhom + " " + String.format("%.2f",loiNhuan);
    }


    @Override
    public int compareTo(mh o){
        if(this.loiNhuan>o.getLoiNhuan()){
            return -1;
        }else return 1;
    }
}