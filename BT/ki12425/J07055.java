import java.io.File;
import java.io.FileNotFoundException;
import java.util.Arrays;
import java.util.Scanner;

class sv implements Comparable<sv> {
    private static Integer cnt = 1;
    private String ten,maSV,xepHang;
    private Integer lt,on,th;
    private double dtb;

    sv(String a,int b,int c,int d){
        this.maSV = "SV" + String.format("%02d",cnt++);
        this.ten = a;
        this.lt = b;
        this.on = c;
        this.th = d;
        this.dtb = b*0.25 + c*0.35 + d*0.4;
        if(dtb<5){
            this.xepHang = "KEM";
        }else if(dtb<6.5){
            this.xepHang = "TRUNG BINH";
        }else if(dtb<8){
            this.xepHang = "KHA";
        }else{
            this.xepHang = "GIOI";
        }
    }

    public double getDtb(){
        return this.dtb;
    }

    @Override
    public String toString(){
        return maSV+" "+ten+" "+String.format("%.2f",dtb)+" "+xepHang;
    }

    @Override
    public int compareTo(sv o){
        return this.getDtb() < o.getDtb() ? 1 : -1;
    }
    
}

public class J07055 {
    public static String chuanHoa(String s){
        String[] l = s.trim().split("\\s+");
        String ans = "";
        for(String i : l){
            ans = ans + i.substring(0,1).toUpperCase() + i.substring(1).toLowerCase() + " ";
        }
        return ans.trim();
    }
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("BANGDIEM.in"));
        int t = Integer.parseInt(sc.nextLine());
        sv[] l = new sv[t];
        for(int i=0;i<t;i++){
            String a = sc.nextLine();
            int b = sc.nextInt();
            int c = sc.nextInt();
            int d = sc.nextInt();
            sc.nextLine();
            l[i] = new sv(chuanHoa(a),b,c,d);
        }
        Arrays.sort(l);
        for(sv i:l){
            System.out.println(i);
        }
    }
}