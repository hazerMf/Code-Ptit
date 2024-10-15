import java.util.Scanner;

public class J01001 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int first = sc.nextInt();
        int second = sc.nextInt();
        if(first>0 & second>0){
            System.out.print((first+second)*2+" "+first*second);
        }else{
            System.out.print('0');
        }
    }
}