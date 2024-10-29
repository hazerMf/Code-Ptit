import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class J08024 {
    public static String findSmallestMultiple(int N) {
        if (N == 1) {
            return "9";
        }
        Queue<String> queue = new LinkedList<>();
        queue.add("9");
        boolean[] visited = new boolean[N];

        while (!queue.isEmpty()) {
            String current = queue.poll();

            int remainder = 0;
            for (int i = 0; i < current.length(); i++) {
                remainder = (remainder * 10 + (current.charAt(i) - '0')) % N;
            }

            if (remainder == 0) {
                return current;
            }

            if (!visited[remainder]) {
                visited[remainder] = true;
                queue.add(current + "0");
                queue.add(current + "9");
            }
        }

        return "";
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();

        while(t-->0) {
            int n = scanner.nextInt();
            System.out.println(findSmallestMultiple(n));
        }

    }
}
