public class StaticKeyword {

    static void hi(){
        System.out.println("Hi");
    }

    void fun(){
        System.out.println("Hello");
        hi();
    }
    public static void main(String[] args) {
        // Student s1 = new Student("Pritam", 20, 13);
        // Student s2 = new Student("Sayan", 21, 15);

        // Student.college = "JGEC";

        // System.out.println(s1.name+" , "+s1.age+" , "+s1.rollNo+" , "+Student.college+" , "+Student.course);
        // System.out.println(s2.name+" , "+s2.age+" , "+s2.rollNo+" , "+s2.college+" , "+Student.course);
        // StaticVariable.fun();
        StaticKeyword ob = new StaticKeyword();
        ob.fun();
    }
}

class Student{
    String name;
    int age;
    int rollNo;
    static String college = "KGEC";
    static String course;

    Student(String name, int age, int rollNo){
        this.name = name;
        this.age = age;
        this.rollNo = rollNo;
        // this.college = college;
    }

    static{ // static block
        course = "B.Tech";
    }

}