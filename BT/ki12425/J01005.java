import java.util.Scanner;
public class J01005 {
    static void findPoint(int n, int h)
    {
        for (int i = 1; i < n; i++)
            System.out.printf("%.6f ",Math.sqrt(i / (n * 1.0)) * h);
            System.out.println();
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int runs = sc.nextInt();
        for(int i=0;i<runs;i++){
            int n = sc.nextInt();
            int h = sc.nextInt();
            findPoint(n, h);
        }
    }
}
