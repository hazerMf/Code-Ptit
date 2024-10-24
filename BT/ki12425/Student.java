public class Student{
    private int id,age,score;
    private String name, address;

    Student(){
        
    }

    Student(int a,String b,int c,String d,int e){
        this.id = a;
        this.name = b;
        setAge(c);
        this.address = d;
        setScore(e);
    }

    public void setID(int t){
        this.id = t;
    }

    public int getId(){
        return id;
    }

    public void setName(String t){
        this.name = t;
    }

    public String getName(){
        return name;
    }

    public void setAge(int t){
        if(t<0){
            return;
        }else this.age = t;
    }

    public int getAge(){
        return age;
    }

    public void setAddress(String t){
        this.address = t;
    }

    public String getAddress(){
        return address;
    }

    public void setScore(int t){
        if(t<0||t>10){
            return;
        }else this.score = t;
    }

    public int getScore(){
        return score;
    }
}