import java.util.Scanner;
import java.util.Arrays;

public class J05009 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        ts[] l = new ts[t];
        for(int i=0;i<t;i++){
            l[i] = new ts(sc.nextLine(),sc.nextLine(),sc.nextFloat(),sc.nextFloat(),sc.nextFloat());
            sc.nextLine();
        }
        Arrays.sort(l);
        float max = l[0].getTong();
        for(ts i:l){
            if(i.getTong()==max){
                System.out.println(i);
            }
        }
    }
}

class ts implements Comparable<ts>{
    private String ten,ngaysinh;
    private float tong;
    private static int cnt=1;
    private int ma;

    ts(String a,String b,float c,float d,float e){
        this.ma = cnt++;
        this.ten = a;
        this.ngaysinh = b;
        this.tong = c + d + e;
    }

    public float getTong(){
        return this.tong;
    }

    public int getMa(){
        return this.ma;
    }

    @Override
    public String toString(){
        return ma + " " + ten + " " + ngaysinh + " " + String.format("%.1f",tong);
    }

    @Override 
    public int compareTo(ts o){
        if(this.tong == o.getTong() ){
            return (this.ma-o.getMa());
        }
        if(this.tong > o.getTong()){
            return -1;
        }else return 1;
    }
}