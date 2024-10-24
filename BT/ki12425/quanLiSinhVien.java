import java.util.Scanner;
public class quanLiSinhVien extends Student {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Student s = new Student(Integer.parseInt(sc.nextLine()),sc.nextLine(),Integer.parseInt(sc.nextLine()),sc.nextLine(),Integer.parseInt(sc.nextLine()));
        System.out.println(s.getId()+" "+s.getName()+" "+s.getAge()+" "+s.getAddress()+" "+s.getScore());
    }
}
