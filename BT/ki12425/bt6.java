import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.ArrayList;

public class bt6 {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc1 = new Scanner(new File("KH.in"));
        Scanner sc2 = new Scanner(new File("MH.in"));
        Scanner sc3 = new Scanner(new File("HD.in"));
        ArrayList<KH> khs = new ArrayList<>();
        ArrayList<MH> mhs = new ArrayList<>();
        int n1 = Integer.parseInt(sc1.nextLine());
        for(int i=0;i<n1;i++){
            KH kh = new KH(sc1.nextLine(),sc1.nextLine(),
            sc1.nextLine(),sc1.nextLine());
            khs.add(kh);
        }
        int n2 = Integer.parseInt(sc2.nextLine());
        for(int i=0;i<n2;i++){
            MH mh = new MH(sc2.nextLine(),sc2.nextLine(),
            Long.parseLong(sc2.nextLine()),Long.parseLong(sc2.nextLine()));
            mhs.add(mh);
        }
        int n3 = Integer.parseInt(sc3.nextLine());
        for(int i=0;i<n3;i++){
            String s = sc3.nextLine();
            String[] w = s.split("\\s+");
            HD hd = new HD(w[0],w[1],Long.parseLong(w[2]));
            System.out.print(hd.getCode()+" ");
            for(KH x:khs){
                if(w[0].equals(x.getCode())){
                    System.out.print(x+" ");
                    break;
                }
            }
            for(MH x:mhs){
                if(w[1].equals(x.getCode())){
                    System.out.print(x+" ");
                    System.out.print(hd.getSl()+" ");
                    System.out.println(x.getSell()*hd.getSl());
                }
            }
        }
    }
}


class KH{
    private String code,name,sex,dob,add;
    private static int id = 1;

    KH(String a,String b,String c, String d){
        this.code = "KH"+String.format("%03d",id++);
        this.name = a;
        this.sex = b;
        this.dob = c;
        this.add = d;
    }

    public String getCode(){
        return code;
    }

    @Override
    public String toString(){
        return name+" "+add;
    }
}

class MH{
    private String code,name,unit;
    private long buy,sell;
    private static int id = 1;

    MH(String a,String b,long c,long d){
        code = "MH"+String.format("%03d",id++);
        this.name = a;
        this.unit = b;
        this.buy = c;
        this.sell = d;
    }

    public String getCode(){
        return code;
    }

    public long getSell(){
        return sell;
    }

    @Override
    public String toString(){
        return name+" "+unit+" "+buy+" "+sell;
    }
}
class HD{
    private String code,makh,mahd;
    private long sl;
    private static int id=1;

    HD(String a,String b,long c){
        this.code = "HD"+String.format("%03d",id++);
        this.makh = a;
        this.mahd = b;
        this.sl = c;
    }

    public long getSl(){
        return sl;
    }

    public String getCode(){
        return code;
    }
}