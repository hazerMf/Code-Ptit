import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Arrays;
import java.util.Vector;

public class bt5 {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DANHSACH.in"));
        
        Vector<sv> v = new Vector<>();
        while(sc.hasNext()){
            sv temp = new sv(sc.nextLine(),sc.nextLine(),sc.nextLine(),sc.nextLine(),sc.nextLine());
            v.add(temp);
        }
        sv[] l = new sv[v.size()];
        int cnt = 0;
        for(sv i:v){
            l[cnt] = i;
            cnt++;
        }
        Arrays.sort(l);
        for(sv i:l){
            System.out.println(i);
        }
    }
}

class sv implements Comparable<sv>{
    private String msv,ten,lop,email,sdt;

    sv(String a,String b,String c,String d,String e){
        this.msv = a;
        this.ten = b;
        this.lop = c;
        this.email = d;
        this.sdt = "0"+e;
    }

    public String getLop(){
        return this.lop;
    }

    public String getMsv(){
        return this.msv;
    }

    @Override
    public int compareTo(sv o){
        if(this.lop.equals(o.getLop())){
            return this.msv.compareTo(o.getMsv());
        }
        return this.lop.compareTo(o.getLop());
    }

    @Override
    public String toString(){
        return msv+" "+ten+" "+lop+" "+email+" "+sdt;
    }
}