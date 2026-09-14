public class Demo {
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.name = "Pritam";
        s1.age = 20;
        System.out.println(s1.toString());// Student@15db9742

        // Student s2 = new Student();
        // System.out.println(s2.toString());// Student@6d06d69c
    }
}

class Student extends Object{
    String name;
    int age;

    // @Override 
    // public String toString(){
    //     return (name +" , "+age);
    // }
}