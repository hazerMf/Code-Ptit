import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.Arrays;

public class J07073 {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc = new Scanner(new File("MONHOC.in"));
        int t = sc.nextInt();
        sc.nextLine();
        mh[] l  =new mh[t];
        for(int i=0;i<t;i++){
            l[i] = new mh(sc.nextLine(),sc.nextLine(),sc.nextLine(),sc.nextLine(),sc.nextLine());
        }
        Arrays.sort(l);
        for(mh i:l){
            if(!i.getTH().equals("Truc tiep")){
                System.out.println(i);
            }
        }
    }
}

class mh implements Comparable<mh>{
    private String ma,ten,tc,lt,th;

    mh(String a,String b,String c,String d,String e){
        this.ma = a;
        this.ten = b;
        this.tc = c;
        this.lt = d;
        this.th = e;
    }

    public String getTH(){
        return this.th;
    }

    public String getMa(){
        return this.ma;
    }

    @Override
    public String toString(){
        return ma+" "+ten+" "+tc+" "+lt+" "+th;
    }

    @Override
    public int compareTo(mh o){
        return this.ma.compareTo(o.getMa());
    }
}