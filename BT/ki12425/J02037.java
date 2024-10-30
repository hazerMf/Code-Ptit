import java.util.Scanner;


public class J02037 {
    public static void chk(String[] l){
        if(l.length%2==0){
            int chan = 0;
            int le = 0;
            for(String i:l){
                int temp = Integer.parseInt(i);
                if(temp%2==0) chan++;
                else le++;
            }
            if(chan>le){
                System.out.println("YES");
            }else System.out.println("NO");
        }else{
            int chan = 0;
            int le = 0;
            for(String i:l){
                int temp = Integer.parseInt(i);
                if(temp%2==0) chan++;
                else le++;
            }
            if(chan<le){
                System.out.println("YES");
            }else System.out.println("NO");
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-->0){
            String line = sc.nextLine();
            String[] l = line.trim().split(" ");
            chk(l);
        }
    }
}
