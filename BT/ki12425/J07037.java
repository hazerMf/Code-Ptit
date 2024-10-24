import java.util.Scanner;
import java.util.Arrays;
import java.io.File;
import java.io.FileNotFoundException;

public class J07037 {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DN.in"));
        int t = sc.nextInt();
        sc.nextLine();
        doanhNghiep[] l = new doanhNghiep[t];
        for(int i=0;i<t;i++){
            l[i] = new doanhNghiep(sc.nextLine(),sc.nextLine(),Integer.parseInt(sc.nextLine()));
        }
        Arrays.sort(l);
        for(doanhNghiep i:l){
            System.out.println(i);
        }
    }
}

class doanhNghiep implements Comparable<doanhNghiep> {
    private String code,name;
    private int stu;

    doanhNghiep(String a,String b,int c){
        this.code=a;
        this.name=b;
        this.stu=c;
    }

    public String getCode(){
        return this.code;
    }

    @Override
    public String toString(){
        return code+" "+name+" "+stu;
    }

    @Override
    public int compareTo(doanhNghiep o){
        return code.compareTo(o.getCode());
    }
}