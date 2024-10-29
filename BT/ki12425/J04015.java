import java.util.Scanner;

public class J04015 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine();
        String b = sc.nextLine();
        Long c = sc.nextLong();
        gv x = new gv(a,b,c);
        System.out.println(x);
    }
}

class gv{
    private String ma,ten,chucVu;
    private long lcb,bacLuong,phuCap;

    gv(String a,String b,Long c){
        this.ma = a;
        this.ten = b;
        this.lcb = c;
        chucVu = a.substring(0,2);
        bacLuong = Long.parseLong(a.substring(2));
        if(chucVu.equals("HT")){
            this.phuCap = 2000000; 
        }else if(chucVu.equals("HP")){
            this.phuCap = 900000; 
        }else if(chucVu.equals("GV")){
            this.phuCap = 500000; 
        }
    }

    public Long getLuong(){
        return phuCap + bacLuong*lcb;
    }

    @Override
    public String toString(){
        return ma+" "+ten+" "+bacLuong+" "+phuCap+" "+this.getLuong();
    }
}