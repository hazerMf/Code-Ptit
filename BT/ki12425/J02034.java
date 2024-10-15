import java.util.Scanner;
public class J02034 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int maxVal = arr[n-1];
        boolean chk = false;
        for(int i =1,j=0;i<=maxVal;i++){
            if(j<n&&i==arr[j]) j++;
            else{
                System.out.println(i);
                chk = true;
            }
        }
        if(!chk){
            System.out.println("Excellent!");
        }
    }
}
