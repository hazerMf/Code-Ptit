import java.util.Scanner;
public class J01025 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a[] = new int[4];
        int b[] = new int[4];
        for(int i=0;i<4;i++){
            a[i] = sc.nextInt();
        }
        for(int i=0;i<4;i++){
            b[i] = sc.nextInt();
        }
        int k = Math.max(Math.max(Math.max(a[0], b[0]), Math.max(a[2], b[2]))-Math.min(Math.min(a[2], b[2]), Math.min(a[0], b[0])), Math.max(Math.max(a[1], b[1]), Math.max(a[3], b[3]))-Math.min(Math.min(a[1], b[1]), Math.min(a[3], a[3])));
        System.out.println((long)k*k);
    }
}
