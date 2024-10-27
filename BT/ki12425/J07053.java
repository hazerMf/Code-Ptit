import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J07053 {
    public static int chuanHoa(String s){
        String[] temp = s.trim().split("/");
        return 2021 - Integer.parseInt(temp[2]);
    }

    public static String ch(String name){
        name = name.trim().replaceAll("\\s+", " ");
        String[] tmp = name.split(" ");
        name = "";
        for (int i = 0; i < tmp.length; i++) {
            name += Character.toUpperCase(tmp[i].charAt(0)) + tmp[i].substring(1).toLowerCase() + " ";
        }
        name = name.trim();
        return name;
    }
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("XETTUYEN.in"));
        int t = Integer.parseInt(sc.nextLine());
        Student[] l = new Student[t];
        for(int i=0;i<t;i++) {
            l[i] = new Student(ch(sc.nextLine()),chuanHoa(sc.nextLine()),sc.nextFloat(),sc.nextFloat());
            sc.nextLine();
        }
        for (Student i : l) {
            float sumMark = i.getSumMark();
            if(sumMark<5){
                i.setStatus("TRUOT");
            }else if(sumMark==5||sumMark==6){
                i.setStatus("Trung binh");
            }else if(sumMark==7){
                i.setStatus("Kha");
            }else if(sumMark==8){
                i.setStatus("Gioi");
            }else{
                i.setStatus("Xuat sac");
            }
        }
        for (Student i : l) {
            System.out.println(i);
        }
    }
}

class Student{

    private static int cnt = 1;
    private String id;
    private String name;
    private int tuoi;
    private float lyThuyet;
    private float thucHanh;
    private String status;

    public Student(String name, int tuoi, float math, float physic) {
        this.id = "PH"+String.format("%02d",cnt++);
        this.name = name;
        this.tuoi = tuoi;
        this.lyThuyet = math;
        this.thucHanh = physic;
    }

    public int getSumMark() {
        float sum = (lyThuyet+thucHanh)/2;
        if(lyThuyet>7.5&&thucHanh>7.5){
            sum+=0.5;
        }
        if(lyThuyet>8&&thucHanh>8){
            sum+=0.5;
        }
        if(sum>10) sum = 10;
        return (int)sum;
    }

    public String getStatus() {
        return status;
    }

    public void setStatus(String status) {
        this.status = status;
    }

    @Override
    public String toString() {
        return id+" "+name+" "+tuoi+" "+this.getSumMark()+" "+status;
    }
}