import java.util.Scanner;
import java.util.Vector;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Arrays;

public class bt7 {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc1 = new Scanner(new File("DANHSACH.in"));
        Scanner sc2 = new Scanner(new File("HUONGDAN.in"));
        Vector<sv> v = new Vector<>();
        while(sc1.hasNext()){
            sv temp = new sv(sc1.nextLine(),sc1.nextLine(),sc1.nextLine(),sc1.nextLine(),sc1.nextLine());
            v.add(temp);
        }
        sv[] l = new sv[v.size()];
        int cnt = 0;
        for(sv i:v){
            l[cnt] = i;
            cnt++;
        }
        int temp = sc2.nextInt();
        sc2.nextLine();
        while(temp-->0){
            String line = sc2.nextLine().trim(); 
            String giangvien = line.substring(0,line.length()-2);
            cnt = Integer.parseInt(line.substring(line.length()-1));
            while(cnt-->0){
                String a = sc2.nextLine();
                String ma = a.substring(0,10);
                String doan = a.substring(11);
                for(sv i:l){
                    if(i.getMsv().equals(ma)){
                        i.setGv(giangvien);
                        i.setDoan(doan);
                        break;
                    }
                }
            }
        }
        Arrays.sort(l);
        for(sv i:l){
            System.out.println(i);
        }
    }
}

class sv implements Comparable<sv>{
    private String msv,ten,lop,email,sdt;
    private String gv,doan;

    sv(String a,String b,String c,String d,String e){
        this.msv = a;
        this.ten = b;
        this.lop = c;
        this.email = d;
        this.sdt = "0"+e;
    }

    public void setGv(String a){
        this.gv = a;
    }

    public void setDoan(String a){
        this.doan = a;
    }

    public String getMsv(){
        return this.msv;
    }

    @Override
    public int compareTo(sv o){
        return this.msv.compareTo(o.getMsv());
    }

    @Override
    public String toString(){
        return msv+" "+ten+" "+gv+" "+doan+" "+sdt;
    }
}