public class Demo {
    public static void main(String[] args) {
        College c = new College("KGEC", "Kalyani");

        Student s1 = new Student(20, "Pritam",c);

        System.out.println(s1.getCollege().name);

        s1.getCollege().name = "IIIT";

        System.out.println(s1.getCollege().name);
    }
}

// Not Immutable class
final class Student{
    private final int age;
    private final String name;
    private final College college;

    Student(int age, String name, College college){
        this.age = age;
        this.name = name;
        this.college = college;
    }

    int getAge(){
        return age;
    }

    String getName(){
        return name;
    }

    College getCollege(){
        return college;
    }

    void markAttendance(){
        System.out.println("Attendance marked.");
    }
}

// Mutable class
class College{
    String name;
    String address;

    College(String name, String address){
        this.name = name;
        this.address = address;
    }
}