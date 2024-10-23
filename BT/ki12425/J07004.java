import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J07004 {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
        int[] arr = new int[1001];
        int max = 0;
        while(sc.hasNext()){
            int temp = sc.nextInt();
            if(temp > max){
                max = temp;
            }
            arr[temp]++;
        }
        for(int i=0;i<=max;i++){
            if(arr[i]>0){
                System.out.printf("%d %d\n",i,arr[i]);
            }
        }
    }
}
