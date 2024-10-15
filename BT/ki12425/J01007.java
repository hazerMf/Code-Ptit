import java.util.*;

public class J01007 {

    static long[] f = new long[95];
    static void init(){
        f[0]=0L;
        f[1]=1L;
        for(int i=2;i<95;i++){
            f[i]=f[i-1]+f[i-2];
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        init();
        int run = sc.nextInt();
        while(run-->0){
            long n = sc.nextLong();
            int index = Arrays.binarySearch(f,0,94,n);
            if(index<0) System.out.println("NO");
            else System.out.println("YES");
        }
    }
}