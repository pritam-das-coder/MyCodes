// Use of super
public class Inheritance2 {
    public static void main(String[] args) {
        EngineeringStudent es = new EngineeringStudent("Pritam", 20, "KGEC");
        es.markAttendance();
    }
}
class Student{
    String name;
    int age;

    Student(){}

    Student(String name, int age){
        this.name = name;
        this.age = age;
    }

    void markAttendance(){
        System.out.println("Student is present.");
    }
}

class EngineeringStudent extends Student{
    String college;

    EngineeringStudent(String name, int age, String college){
        // super(name, age);
        super();
        this.college = college;
    }

    void markAttendance(){
        super.markAttendance();
        System.out.println("Eng. Student is present.");

        System.out.println(super.name);
    }
}