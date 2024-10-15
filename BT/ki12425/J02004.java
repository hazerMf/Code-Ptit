import java.util.Scanner;
public class J02004 {
    static boolean chk(int[] arr){
        for(int i=0;i<arr.length/2;i++){
            if(arr[i]!=arr[arr.length-i-1]) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt();
        for(int run=0;run<r;run++){
            int l = sc.nextInt();
            int[] arr = new int[l];
            for(int i=0;i<l;i++){
                arr[i] = sc.nextInt();
            }
            if(chk(arr)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
