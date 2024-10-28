import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.Arrays;

public class J07081 {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc = new Scanner(new File("SINHVIEN.in"));
        int t = sc.nextInt();
        sc.nextLine();
        sv[] l = new sv[t];
        for(int i =0;i<t;i++){
            l[i] = new sv(sc.nextLine(),sc.nextLine(),sc.nextLine(),sc.nextLine());
        }
        Arrays.sort(l);
        for(sv i:l){
            System.out.println(i);
        }
    }
}

class sv implements Comparable<sv>{
    private String msv,tendu,sdt,email;
    private String ten,ho,dem;

    sv(String a,String b,String c,String d){
        this.msv = a;
        this.tendu = b;
        this.sdt = c;
        this.email = d;
        String[] temp = b.trim().split("\\s+");
        this.ten = temp[temp.length-1];
        this.ho = temp[0];
        this.dem = "";
        for(int i=1;i<temp.length;i++){
            this.dem = this.dem + temp[i];
        }
    }

    public String getTen(){
        return this.ten;
    }

    public String getHo(){
        return this.ho;
    }

    public String getDem(){
        return this.dem;
    }

    public String getMsv(){
        return this.msv;
    }

    @Override
    public String toString(){
        return msv+" "+tendu+" "+sdt+" "+email;
    }

    @Override
    public int compareTo(sv o){
        if(!ten.equals(o.getTen())){
            return ten.compareTo(o.getTen());
        }
        if(!ho.equals(o.getHo())){
            return ho.compareTo(o.getHo());
        }
        if(!dem.equals(o.getDem())){
            return dem.compareTo(o.getDem());
        }
        return msv.compareTo(o.getMsv());
    }
}