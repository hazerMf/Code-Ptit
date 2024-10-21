import java.util.Scanner;

public class J04005 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String t = sc.nextLine();
        String n = sc.nextLine();
        float a = sc.nextFloat();
        float b = sc.nextFloat();
        float c = sc.nextFloat();
        ThiSinh x = new ThiSinh(t,n,a,b,c);
        System.out.println(x);
    }
}

class ThiSinh{
    private String ten,ngaySinh;
    private Float diem;

    public ThiSinh(String t,String n,float a,float b,float c){
        this.ten = t;
        this.ngaySinh = n;
        this.diem = a+b+c;
    }

    @Override 
    public String toString(){
        return String.format("%s %s %.1f", (String) this.ten, (String) this.ngaySinh,(float) this.diem);
    }
}