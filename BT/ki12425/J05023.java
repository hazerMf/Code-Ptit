import java.util.Scanner;
import java.util.Arrays;

public class J05023 {
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
            String khoa = sc.nextLine();
            System.out.printf("DANH SACH SINH VIEN KHOA %s:\n",khoa);
            for(student i:a){
                
                if(i.method.substring(1,3).equals(khoa.substring(2,4))){
                    System.out.println(i);
                }
            }
        }
    }
}