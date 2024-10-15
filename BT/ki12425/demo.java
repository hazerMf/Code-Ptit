import java.util.Scanner;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;
public class demo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<String> list = Arrays.asList("Apple","Banana","Aaa");
        list.stream().forEach(System.out::println);
    }
}