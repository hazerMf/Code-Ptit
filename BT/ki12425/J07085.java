import java.io.ObjectInputStream;
import java.io.ObjectStreamException;
import java.util.List;
import java.util.Scanner;
import java.io.FileInputStream;
import java.io.IOException;

public class J07085 {
    public static boolean chk(char k){
        if(k!='1'&&k!='2'&&k!='3'&&k!='4'&&k!='5'&&k!='6'&&k!='7'&&k!='8'&&k!='9'&&k!='0'){
            return false;
        }else return true;
    }
    public static void main(String[] args) throws ObjectStreamException ,IOException ,ClassNotFoundException{
        ObjectInputStream ois = new ObjectInputStream(new FileInputStream("DATA.in"));
        List<String> l = (List<String>) ois.readObject();
        for(String i : l){
            int sum = 0;
            int n = 0;
        for(int j=0;j<i.length();j++){
            char k = i.charAt(j);
            if(chk(k)){
                if(k=='0'&&n==0){
                    continue;
                }else{
                    System.out.print(k);
                    sum += (k-'0');
                    n=1;
                }
            }
        }
        System.out.println(" "+sum);
        }
    }
}
