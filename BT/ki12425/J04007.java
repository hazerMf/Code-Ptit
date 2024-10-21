import java.util.Scanner;

public class J04007 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String t = sc.nextLine();
        String g = sc.nextLine();
        String n = sc.nextLine();
        String d = sc.nextLine();
        String th = sc.nextLine();
        String k = sc.nextLine();
        NhanVien x = new NhanVien(t,g,n,d,th,k);
        System.out.println(x);
    }
}

class NhanVien{
    private String maNV,ten,ngaySinh,gioiTinh,diaChi,thue,ngayKi;

    public NhanVien(String t,String g,String n,String d,String th,String k){
        this.maNV = "00001";
        this.ten = t;
        this.gioiTinh = g;
        this.ngaySinh = n;
        this.diaChi = d;
        this.thue = th;
        this.ngayKi = k;
    }

    @Override 
    public String toString(){
        return maNV+" "+ten+" "+gioiTinh+" "+ngaySinh+" "+diaChi+" "+thue+" "+ngayKi;
    }
}