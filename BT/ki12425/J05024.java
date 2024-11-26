import java.util.Scanner;
import java.util.Arrays;

public class J05024 {
    static char up(char x) {
        if ('a' <= x && x <= 'z')
            return (char) ((int) x - 32);
        return x;
    }

    static String re(String name) {
        String[] a = name.split("[' ']+");
        String r = "";
        for (int i = 0; i < a.length; i++) {
            if (a[i].length() == 0)
                continue;
            String s = Character.toString(up(a[i].charAt(0))) + a[i].substring(1);
            r += s + " ";
        }
        return r;
    }

    static class student {
        String code, name, method, mail;

        public student(String c, String n, String m, String em) {
            code = c;
            name = n;
            method = m;
            mail = em;
        }

        public boolean big(student b) {
            if (code.compareTo(b.code) > 0)
                return true;
            return false;
        }

        public String toString() {
            return code + " " + name + ' ' + method + " " + mail;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        student[] a = new student[t];
        sc.nextLine();
        for(int i=0;i<t;i++){
            a[i] = new student(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
        } 
        
        t = sc.nextInt();
        sc.nextLine();
        while(t-->0){
            String nganh = sc.nextLine();
            nganh = nganh.toUpperCase();
            System.out.printf("DANH SACH SINH VIEN NGANH %s:\n",nganh);
            String key = "";
            if(nganh.equals("KE TOAN")){
                key = "DCKT";
            }else if (nganh.equals("CONG NGHE THONG TIN")){
                key = "DCCN";
            }else if (nganh.equals("AN TOAN THONG TIN")){
                key = "DCAT";
            }else if (nganh.equals("VIEN THONG")){
                key = "DCVT";
            }else key = "DCDT";
            if(!key.equals("DCCN")&&!key.equals("DCAT")){
                for(student i:a){
                
                    if(i.code.substring(3,7).equals(key)){
                        System.out.println(i);
                    }
                }
            }else{
                for(student i:a){
                
                    if(i.code.substring(3,7).equals(key)&&!i.method.substring(0,1).equals("E")){
                        System.out.println(i);
                    }
                }
            }
            
        }
    }
}