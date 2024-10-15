import java.util.Scanner;
public class J01008 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int runs=0;runs<n;runs++){
            int a = sc.nextInt();
            System.out.print("Test "+(runs+1)+": ");
            int e = 2;
            int c = 0;
            while(a!=1){
                if(a%e==0){
                    while(a%e==0){
                        a = a/e;
                        c+=1;
                    }
                    System.out.print(e);
                    System.out.print("("+c+") ");
                }
                e+=1;
                c=0;
            }
            System.out.println();
        }
    }
}
