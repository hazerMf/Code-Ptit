import java.util.Arrays;
import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Arrays;

public class J07056 {
    public static String chuanHoa(String s){
        String[] l = s.trim().split("\\s+");
        String ans = "";
        for(String i:l){
            ans = ans + i.substring(0,1).toUpperCase() + i.substring(1).toLowerCase()+" ";
        }
        return ans.trim();
    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("KHACHHANG.in"));
        int t = sc.nextInt();
        sc.nextLine();
        tienDien[] l = new tienDien[t];
        for(int i=0;i<t;i++){
            l[i] = new tienDien(chuanHoa(sc.nextLine()),sc.next(),sc.nextInt(),sc.nextInt());
            sc.nextLine();
        }
        Arrays.sort(l);
        for(tienDien i:l){
            System.out.println(i);
        }
    }
}

class tienDien implements Comparable<tienDien> {
    private static int cnt = 1;
    private String id,name,type;
    private int dinhMuc,under,over,vat;

    tienDien(String a,String b,int c,int d){
        this.id = "KH" + String.format("%02d",cnt++);
        this.name = a;
        this.type = b;
        if(type.equals("A")){
            this.dinhMuc=100;
        }else if(type.equals("B")){
            this.dinhMuc=500;
        }else{
            this.dinhMuc=200;
        }
        int temp = d-c;
        if(temp<=dinhMuc){
            this.under = temp*450;
            this.over = 0;
            this.vat = 0;
        }else{
            this.under = dinhMuc*450;
            this.over = (temp-dinhMuc)*1000;
            this.vat = (int) over*5/100;
        }
    }

    public int getTong(){
        return under+over+vat;
    }

    @Override
    public String toString(){
        return id+" "+name+" "+under+" "+over+" "+vat+" "+getTong();
    }

    @Override 
    public int compareTo(tienDien o){
        return -(this.getTong()-o.getTong());
    }
}
