public class Inheritance {
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.markAttendance();

        EngineeringStudent es = new EngineeringStudent();
        es.markAttendance();
        es.markLabs();
        // int x = es.age;
    }
}

class Student{
    String name;
    protected int age;

    void markAttendance(){
        System.out.println("Student is present.");
    }
}

class EngineeringStudent extends Student{
    void markLabs(){
        System.out.println("Eng. Student is present.");
    }
}