
import java.util.Arrays;
import java.util.Scanner;
public class bai1 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        float[] arr = new float[n];
        for(int i=0;i<n;i++){
            arr[i] = sc.nextFloat();
        }
        Arrays.sort(arr);
        int cnt = 0;
        float tong = 0;
        for(int i=0;i<n;i++){
            if(arr[i]!=arr[0]&&arr[i]!=arr[n-1]){
                cnt++;
                tong += arr[i];
            }
        }
        System.out.printf("%.2f",tong/cnt);
    }
}
