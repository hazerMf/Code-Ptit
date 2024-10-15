import java.util.Scanner;
public class J02106 {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n = sc.nextInt();
        int[][] m = new int[n][3];
        for(int i=0;i<n;i++){
            for(int j=0;j<3;j++){
                m[i][j]=sc.nextInt();
            }
        }
        int cnt = 0;
        for(int i=0;i<n;i++){
            int temp = 0;
            for(int j=0;j<3;j++){
                if(m[i][j]==1) temp++;
            }
            if(temp>=2) cnt++;
        }
        System.out.println(cnt);
    }
}
