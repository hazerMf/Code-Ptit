import java.io.*;
import java.util.*;

class Student{
    String id,name,classId,email,phone,gender;

    public Student(String a,String b,String c,String d,String e,String f){
        this.id = a;
        this.name = b;
        this.classId = c;
        this.email = d;
        this.phone = e;
        this.gender = f;
    }

    @Override
    public String toString(){
        return id+" "+name+" "+classId+" "+email+" "+phone;
    }
}

class Registration{
    String studentId,size;

    public Registration(String studentId,String size){
        this.studentId = studentId;
        this.size = size;
    }
}

public class bt9 {
    public static void main(String[] args) {
        try{
            Map<String,Student> students = new HashMap<>();
            List<Registration> registrations = new ArrayList<>();
            List<String[]> queries = new ArrayList<>();
            BufferedReader br = new BufferedReader(new FileReader("SINHVIEN.in"));
            int n = Integer.parseInt(br.readLine().trim());
            for(int i=0;i<n;i++){
                String id = br.readLine().trim();
                String name = br.readLine().trim();
                String classId = br.readLine().trim();
                String email = br.readLine().trim();
                String phone = br.readLine().trim();
                String gender = br.readLine().trim();
                students.put(id,new Student(id,name,classId,email,phone,gender));
            }
            br.close();

            br = new BufferedReader(new FileReader("DANGKY.in"));
            String line;
            while((line=br.readLine())!=null){
                String[] parts = line.trim().split("\\s+");
                registrations.add(new Registration(parts[0],parts[1]));
            }
            br.close();

            br = new BufferedReader(new FileReader("TRUYVAN.in"));

            int q = Integer.parseInt(br.readLine().trim());
            for(int i=0;i<q;i++){
                queries.add(br.readLine().trim().split("\\s+"));
            }
            br.close();

            for(String[] query:queries){
                String gender = query[0];
                String size = query[1];
                List<Student> result = new ArrayList<>();
                for(Registration re : registrations){
                    Student student = students.get(re.studentId);
                    if(student.gender.equals(gender)&&re.size.equals(size)){
                        result.add(student);
                    }
                }
                result.sort(Comparator.comparing(s->s.id));

                System.out.println("DANH SACH SINH VIEN "+gender.toUpperCase()+" DANG KY SIZE "+size.toUpperCase());
                for(Student s:result){
                    System.out.println(s);
                }
            }
        }catch (IOException e){
            e.printStackTrace();
        }
    }
}
