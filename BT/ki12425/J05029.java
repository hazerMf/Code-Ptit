import java.util.Scanner;
import java.util.Arrays;

public class J05029 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        td[] l = new td[n];
        for(int i=0;i<n;i++){
            sc.nextLine();
            l[i] = new td(sc.nextLine(), sc.nextLine(), sc.nextInt());
        }

        int t = sc.nextInt();
        while(t-->0){
            int a = sc.nextInt();
            int b = sc.nextInt();
            Arrays.sort(l);
            System.out.printf("DANH SACH DOANH NGHIEP NHAN TU %d DEN %d SINH VIEN:\n",a,b);
            for(td i:l){
                if(i.student>=a&&i.student<=b){
                    System.out.println(i);
                }
                
            }
        }
        
    }
}

class td implements Comparable<td> {
    String code, name;
    int student;

    public td(String code, String name, int student){
        this.code = code;
        this.name = name;
        this.student = student;
    }

    public String toString() {
        return code + ' ' + name + ' ' + student;
    }

    @Override
    public int compareTo(td o){
        if(this.student == o.student) return this.code.compareTo(o.code);
        return o.student - this.student;
    }
}