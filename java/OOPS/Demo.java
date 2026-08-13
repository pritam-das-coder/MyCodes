public class Demo{
    public static void main(String args[]){
        Student s1=new Student();
        s1.name="Pritam Das";
        s1.rollNo=48;
        s1.age=20;
        s1.college="KGEC";

        Student s2=new Student();
        s2.name="Sourav Das";
        s2.rollNo=49;
        s2.age=21;
        s2.college="JGEC";

        s1.markAttendance();
        s2.markAttendance();

        s1.print();
        s2.print();
    }
}

class Student{
    String name;
    long rollNo;
    int age;
    String college;

    void markAttendance(){
        System.out.println("Attendance marked by "+name+"!");
    }

    void print(){
        System.out.println("Name : "+name+" Roll No. : "+rollNo+" Age : "+age+" College : "+college);
    }
}