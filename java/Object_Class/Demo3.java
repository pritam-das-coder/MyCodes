import java.util.Objects;

public class Demo3 {
    public static void main(String[] args) throws CloneNotSupportedException{
        Student s1 = new Student("Pritam", 20);
        // Student s2 = new Student("Pritam", 20);
        Object obj = new Student("Pritam",20);
        // Student s2 = s1;
        // Student s2 = null;
        // Integer s2 = 23;

        // System.out.println(s1.equals(s2));
        // System.out.println(s1.hashCode() == s2.hashCode());

        // System.out.println(s1.getClass().getName());
        // System.out.println(obj.getClass().getName());

        // System.out.println(s1 instanceof Object);

        Student s3 = (Student) s1.clone();
        System.out.println(s3.name);
        System.out.println(s3.age);
    }
}

class Student extends Object implements Cloneable{
    String name;
    int age;

    Student(String name, int age){
        this.name = name;
        this.age = age;
    }

    @Override 
    public String toString(){
        return (name +" , "+age);
    }

    @Override 
    public boolean equals(Object obj){
        if(obj == this) return true;

        // If not checked --> java.lang.NullPointerException
        if(obj == null) return false;

        // If not checked --> java.lang.ClassCastException
        if(this.getClass() != obj.getClass()) return false;

        Student s = (Student) obj;
        return ((s.name == this.name) && (s.age == this.age));
    }

    @Override 
    public int hashCode(){
        // int result = 17;
        // result = result * 31 + age;
        // result = result * 31 + ((name == null) ? 0 : name.hashCode());

        // return result;
        return Objects.hash(name, age);
    }

    @Override 
    protected Object clone() throws CloneNotSupportedException{
        return super.clone();
    }
    // public void fun() throws CloneNotSupportedException{
    //     Student s = new Student("Hi", 2);
    //     Student s1 = (Student) s.clone();
    // }
}