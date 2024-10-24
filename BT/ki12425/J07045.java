import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Scanner;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

public class J07045 {
    public static void main(String[] args) throws IOException {
        ArrayList<LoaiPhong> ds = new ArrayList<>();
        Scanner in = new Scanner(new File("PHONG.in"));
        int n = Integer.parseInt(in.nextLine());
        while(n-->0){
            ds.add(new LoaiPhong(in.nextLine()));
        }
        Collections.sort(ds);
        for(LoaiPhong tmp : ds){
            System.out.println(tmp);
        }
    }
}

class LoaiPhong implements Comparable<LoaiPhong> {
    private String code,name,day,fee;

    LoaiPhong(String s){
        String[] l = s.trim().split("\\s+");
        this.code=l[0];
        this.name=l[1];
        this.day=l[2];
        this.fee = l[3];
    }

    public String getName(){
        return this.name;
    }

    @Override
    public String toString(){
        return code+" "+name+" "+day+" "+fee;
    }

    @Override
    public int compareTo(LoaiPhong o){
        return name.compareTo(o.getName());
    }
}