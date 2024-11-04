import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;
import java.util.Vector;

class Pair implements Comparable<Pair>{
    private int t,d;

    Pair(int a,int b){
        this.t = a;
        this.d = b;
    }

    public int getDuration(){
        return this.d;
    }

    public int getTime(){
        return this.t;
    }

    @Override
    public int compareTo(Pair o){
        return this.t - o.getTime();
    }
}

public class J02009 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Pair[] p = new Pair[n];
        for(int i=0;i<n;i++){
            p[i] = new Pair(sc.nextInt(),sc.nextInt());
        }
        Arrays.sort(p);
        int s = 0;
        for (int i = 0; i < n; i++) {
            if (s < p[i].getTime()) {
                s = p[i].getTime();
            }
            s += p[i].getDuration();
        }
        System.out.println(s);
    }
}