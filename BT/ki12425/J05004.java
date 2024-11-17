import java.util.Scanner;

public class J05004 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        sv[] l = new sv[t];
        for(int i=0;i<t;i++){
            l[i] = new sv(sc.nextLine(),sc.nextLine(),sc.nextLine(),sc.nextFloat());
            sc.nextLine();
        }
        for(sv i:l){
            System.out.println(i);
        }
    }
}

class sv {
    private String ma,ten,lop,ngaySinh;
    private float gpa;
    private static int cnt = 1;

    sv(){
        this.ma = "";
        this.ten = "";
        this.lop = "";
        this.ngaySinh = "";
    }

    sv(String a,String b,String c,float d){
        this.ma = "B20DCCN"+String.format("%03d",cnt++);
        this.ten = chuanHoa(a);
        this.lop = b;
        this.ngaySinh = fix(c);
        this.gpa = d;
    }

    public String chuanHoa(String a){
        String[] l = a.trim().split("\\s+");
        String ans = "";
        for(String i:l){
            ans += i.substring(0,1).toUpperCase()+i.substring(1).toLowerCase()+" ";
        }
        return ans.trim();
    }

    public String fix(String a){
        String[] l = a.trim().split("/");
        String ans = "";
        if(l[0].length()<2){
            ans += "0"+l[0]+"/";
        }else{
            ans += l[0]+"/";
        }
        if(l[1].length()<2){
            ans += "0"+l[1]+"/";
        }else{
            ans += l[1]+"/";
        }
        ans+=l[2];
        return ans;
    }

    @Override 
    public String toString(){
        return ma+" "+ten+" "+lop+" "+ngaySinh+" "+String.format("%.2f",gpa);
    }
}