public class Constructor {
    public static void main(String[] args) {
        Student s1 = new Student("Pritam Das",12,34,"KGEC");
        Student s2 =new Student();

        System.out.println("Name : "+s2.name+" Age : "+s2.age+" Roll No. : "+s2.rollNo+" College : "+s2.college);
    }
}

class Student{
    String name;
    int age;
    int rollNo;
    String college;

    // Constructor chaining

    // Student(){
    //     this.name = "PD";
    //     this.age = 12;
    //     this.rollNo = 34;
    //     this.college = "JGEC";
    // }

    // Student(String name){
    //     this.name = name;
    //     this.age = 34;
    //     this.rollNo = 56;
    //     this.college = "IIT";
    // }

    // Student(String name, int age){
    //     this.name = name;
    //     this.age = age;
    //     this.rollNo = 23;
    //     this.college = "KIT";
    // }

    // Student(String name, int age, int rollNo){
    //     this.name = name;
    //     this.age = age;
    //     this.rollNo = rollNo;
    //     this.college = "NIT";
    // }

    // Student(String name, int age, int rollNo, String college){
    //     this.name = name;
    //     this.age = age;
    //     this.rollNo = rollNo;
    //     this.college = college;
    // }

    // Student(){
    //     this("PD");
    // }

    // Student(String name){
    //     this(name, 12);
    // }

    // Student(String name, int age){
    //     this(name, age, 34);
    // }

    // Student(String name, int age, int rollNo){
    //     this(name, age, rollNo, "KGEC");
    // }

    // Student(String name, int age, int rollNo, String college){
    //     this.name = name;
    //     this.age = age;
    //     this.rollNo = rollNo;
    //     this.college = college;
    // }

    Student(){
        this("PD",12,34,"KGEC");
    }

    Student(String name){
        this(name, 12, 34, "KGEC");
    }

    Student(String name, int age){
        this(name, age, 34, "KGEC");
    }

    Student(String name, int age, int rollNo){
        this(name, age, rollNo, "KGEC");
    }

    Student(String name, int age, int rollNo, String college){
        this.name = name;
        this.age = age;
        this.rollNo = rollNo;
        this.college = college;
    }

    void markAttendance(){
        System.out.println("Attendance marked by "+name);
    }
}
