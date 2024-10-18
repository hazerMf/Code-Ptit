import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Scanner;
import java.util.Set;

public class bai2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        Set<Integer> errors = new HashSet<>();
        for(int i=0;i<m;i++){
            errors.add(sc.nextInt());
        }
        System.out.println("Errors: "+range(errors,1,n,true));
        System.out.println("Correct: "+range(errors,1,n,false));
    }
    private static String range(Set<Integer> errors,int start,int end,boolean forErrors){
        List<String> ranges = new ArrayList<>();
        for(int i=start;i<=end;i++){
            if(errors.contains(i)==forErrors){
                int rangeStart = i;
                while(i<=end&& errors.contains(i)==forErrors) i++;
                ranges.add(rangeStart ==i-1?""+rangeStart:rangeStart+"-"+(i-1));
            }
        }
        return String.join(", ",ranges).replaceAll(",([^,]*)$"," and$1");
    }
}