import java.util.Scanner;

public class J02101 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int[][] m = new int[n][n];
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    m[i][j] = sc.nextInt();
                }
            }
            for(int i=0;i<n;i++){
                if(i%2==0){
                    for(int j=0;j<n;j++){
                        System.out.print(m[i][j]+" ");
                    }
                }else{
                    for(int j=n-1;j>=0;j--){
                        System.out.print(m[i][j]+" ");
                    }
                }
            }
            System.out.println();
        }
    }
}
