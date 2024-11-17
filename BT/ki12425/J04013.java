import java.util.Scanner;

public class J04013 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String ma = sc.nextLine();
        String ten = sc.nextLine();
        double diem = sc.nextFloat()*2+sc.nextFloat()+sc.nextFloat();
        String kv = ma.substring(0,3);
        double uutien = 0;
        if(kv.equals("KV1")){
            uutien = 0.5;
        }else if(kv.equals("KV2")){
            uutien = 1;
        }else if(kv.equals("KV3")){
            uutien = 2.5;
        }
        
        System.out.print(ma + " " + ten + " ");
        if ((int) uutien == uutien)
            System.out.printf("%.0f ", uutien);
        else
            System.out.printf("%.1f ", uutien);
        if ((int) diem == diem  )
            System.out.printf("%.0f ", diem );
        else
            System.out.printf("%.1f ", diem );
        if (diem+uutien >= 24)
            System.out.println("TRUNG TUYEN");
        else
            System.out.println("TRUOT");
    }
}
