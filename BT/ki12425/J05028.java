import java.util.Scanner;
import java.util.Arrays;

public class J05028 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        td[] l = new td[n];
        for(int i=0;i<n;i++){
            sc.nextLine();
            l[i] = new td(sc.nextLine(), sc.nextLine(), sc.nextInt());
        }
        Arrays.sort(l);
        for(td i:l){
            System.out.println(i);
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