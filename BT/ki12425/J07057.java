import java.io.File;
import java.io.FileNotFoundException;
import java.util.Arrays;
import java.util.Scanner;

class sv implements Comparable<sv> {
    private static Integer cnt = 1;
    private String ten,maSV,xepHang,danToc;
    private Double dt,diemCuoi;
    private Integer kv;

    sv(String a,double b,String c,int d){
        this.maSV = "TS" + String.format("%02d",cnt++);
        this.ten = a;
        this.dt = b;
        this.danToc = c;
        this.kv = d;
        this.diemCuoi = b;
        if(d==1){
            diemCuoi = diemCuoi + 1.5;
        }else if(d==2){
            diemCuoi += 1;
        }
        if(!c.equals("Kinh")){
            diemCuoi+=1.5;
        }
        if(diemCuoi<20.5){
            this.xepHang = "Truot";
        }else{
            this.xepHang = "Do";
        }
    }

    public double getdiemCuoi(){
        return this.diemCuoi;
    }

    public String getMaSV(){
        return this.maSV;
    }

    @Override
    public String toString(){
        return maSV+" "+ten+" "+String.format("%.1f",diemCuoi)+" "+xepHang;
    }

    @Override
    public int compareTo(sv o){
        if(this.getdiemCuoi() == o.getdiemCuoi()){
            return maSV.compareTo(o.getMaSV());
        }
        return this.getdiemCuoi() < o.getdiemCuoi() ? 1 : -1;
    }
    
}

public class J07057 {
    public static String chuanHoa(String s){
        String[] l = s.trim().split("\\s+");
        String ans = "";
        for(String i : l){
            ans = ans + i.substring(0,1).toUpperCase() + i.substring(1).toLowerCase() + " ";
        }
        return ans.trim();
    }
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("THISINH.in"));
        int t = Integer.parseInt(sc.nextLine());
        sv[] l = new sv[t];
        for(int i=0;i<t;i++){
            String a = sc.nextLine();
            float b = sc.nextFloat();
            sc.nextLine();
            String c = sc.nextLine();
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