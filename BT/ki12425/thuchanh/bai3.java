import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;

public class bai3 {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc = new Scanner(new File("DANHSACH.in"));
        ArrayList<sv> s = new ArrayList<>();
        while(sc.hasNextLine()){
            sv a = new sv(sc.nextLine(),sc.nextLine(),sc.nextLine(),sc.nextLine(),sc.nextLine());
            s.add(a);
        }
        s.sort((Comparator.comparing(sv::getLop).thenComparing(sv::getMsv)));
        for(sv i:s){
            System.out.println(i);
        }
    }
    
}

class sv{
    private String msv,name,lop,mail,sdt;
    sv(String msv,String name,String lop,String mail,String sdt){
        this.msv=msv;
        this.name=name;
        this.lop=lop;
        this.mail=mail;
        this.sdt=sdt;
    }
    public String getLop(){
        return lop;
    }

    public String getMsv(){
        return msv;
    }

    @Override
    public String toString(){
        return msv + " " + name + " " + lop + " " + mail + " " + "0" + sdt;
    }
}
