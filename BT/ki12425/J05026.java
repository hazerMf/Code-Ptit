import java.util.Scanner;
import java.util.Arrays;

public class J05026 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        gv[] l = new gv[t];
        for(int i=0;i<t;i++){
            l[i] = new gv(sc.nextLine(),sc.nextLine());
        }
        t = sc.nextInt();
        sc.nextLine();
        while(t-->0){
            String temp[] = sc.nextLine().split(" ");
            String ans = "";
            for(String i:temp){
                ans += i.substring(0,1).toUpperCase();
            }
            System.out.printf("DANH SACH GIANG VIEN BO MON %s:\n",ans);
            for(gv i:l){
                if(i.mon.equals(ans)){
                    System.out.println(i);
                }
            }
        }
    }
}

class gv implements Comparable<gv>{
    public String ma,ten,hoTen,mon;
    public static int cnt = 1;

    gv(String a,String b){
        this.ma = String.format("GV%02d",cnt++);
        this.hoTen = a;
        String[] temp = a.split(" ");
        this.ten = temp[temp.length-1];
        temp = b.split(" ");
        String ans = "";
        for(String i:temp){
            ans += i.substring(0,1).toUpperCase();
        }
        this.mon = ans;
    }

    @Override 
    public String toString(){
        return ma+" "+hoTen+" "+mon;
    }

    @Override
    public int compareTo(gv o){
        if(this.ten.equals(o.ten)){
            return this.ma.compareTo(o.ma);
        }else return this.ten.compareTo(o.ten);
    }
}