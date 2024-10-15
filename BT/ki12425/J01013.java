import java.util.Scanner;
public class J01013 {
    static long[] f = new long[2000001];
    
    public static void main(String[] args) {
        for(int i=0;i<2000001;i++){
            f[i]=0;
            Boolean oke=true;
            for(int j=2;j<=(int)Math.sqrt(i);j++){
                if(i%j==0){
                    f[i]=f[j]+f[i/j];
                    oke=false;
                    break;
                }
            }
            if(oke) f[i]=i;
        }
        Scanner sc = new Scanner(System.in);
        long t = sc.nextLong();
        long s=0;
        for (long i = 0; i < t; i++) {
            int a=sc.nextInt();
            s+=f[a];
        }
        System.out.print(s);
    }
}