import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;
import java.io.File;
import java.io.FileNotFoundException;

public class bai8 {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc = new Scanner(new File("MONHOC.in"));
        ArrayList<mon> s = new ArrayList<>();
        Set<String> check = new HashSet<>();
        while(sc.hasNextLine()){
            String ma = sc.nextLine();
            String name = sc.nextLine();
            String ht = sc.nextLine();
            if(check.contains(ma)){
                continue;
            }else{
                mon a = new mon(ma,name,ht);
                s.add(a);
            }
        }
        s.sort((Comparator.comparing(mon::getMa)));
        for(mon i:s){
            System.out.println(i);
        }
    }
}

class mon{
    private String maMon,ten,hinhThuc;
    mon(String maMon,String ten,String hinhThuc){
        this.maMon=maMon;
        this.ten=ten;
        this.hinhThuc=hinhThuc;
    }
    
    public String getMa(){
        return maMon;
    }

    @Override
    public String toString(){
        return maMon + " " + ten + " " + hinhThuc;
    }
}
