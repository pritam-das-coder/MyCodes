// Write a java code to illustrate the property of static keyword.
class Student {
    int rollNo;
    String name;

    static String college = "IIT KGP";
    static int totalStudents = 0;

    static {
        System.out.println("--> Static block executed: Student class loaded into memory.");
    }

    public Student(int rollNo, String name) {
        this.rollNo = rollNo;
        this.name = name;
        totalStudents++; 
    }

    static void changeCollege(String newCollegeName) {
        college = newCollegeName;
    }

    public void display() {
        System.out.println("Roll No: " + rollNo + ", Name: " + name + ", College: " + college);
    }
}

public class Q9 {
    public static void main(String[] args) {
        System.out.println("--> Main method started.\n");
        
        System.out.println("Initial total students: " + Student.totalStudents);
        System.out.println("-------------------------------------------------");

        Student s1 = new Student(101, "Pritam");
        Student s2 = new Student(102, "Alan");

        System.out.println("Before changing college:");
        s1.display();
        s2.display();

        System.out.println("\nChanging college using static method...");

        Student.changeCollege("KGEC"); 

        System.out.println("\nAfter changing college:");

        s1.display();
        s2.display();

        System.out.println("-------------------------------------------------");
        System.out.println("Final total students: " + Student.totalStudents);
    }
}