// Write a program to demonstrate use of 'this' keyword.
class Student {
    String name;
    int age;

    public Student(String name, int age) {
        this.name = name; 
        this.age = age;
    }

    public Student(String name) {
        this(name, 18);
    }

    public void displayInfo() {
        System.out.println("Name: " + this.name + ", Age: " + this.age);
    }

    public void printDetails() {
        System.out.println("Fetching student details...");
        this.displayInfo();
    }
}

public class Q8 {
    public static void main(String[] args) {
        Student s1 = new Student("Pritam", 20);
        
        Student s2 = new Student("Alan"); 

        s1.printDetails();
        s2.printDetails();
    }
}