import java.io.*;
import java.util.*;

public class bt3 {
    public static void main(String[] args) {
        Set<Integer> palindromes = new HashSet<>();
        try{
            ObjectInputStream ois = new ObjectInputStream(new FileInputStream("DAYSO.DAT"));
            ArrayList<Integer> numbers = (ArrayList<Integer>) ois.readObject();
            ois.close();
            for(int number : numbers){
                if(number >= 100 && isPalindrome(number)){
                    palindromes.add(number);
                }
            }
            List<Integer> sortedNumbers = new ArrayList<>(palindromes);
            Collections.sort(sortedNumbers);
            for(int num : sortedNumbers){
                System.out.println(num);
            }
        }catch (IOException|ClassNotFoundException e){
            e.printStackTrace();
        }
    }
    private static boolean isPalindrome(int number){
        String str = String.valueOf(number);
        String reversedStr = new StringBuilder(str).reverse().toString();
        return str.equals(reversedStr);
    }
}
