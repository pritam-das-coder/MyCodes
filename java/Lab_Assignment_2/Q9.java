// Write a program in java to implement dynamic method dispatch concept.
public class Q9 {
    public static void main(String[] args) {
        Teenager teenager = new Teenager();
        teenager.introduce();

        teenager = new Student();
        teenager.introduce();

        teenager = new Child();
        teenager.introduce();
    }
}

class Teenager{
    void introduce(){
        System.out.println("Hi, I am a teenager.");
    }
}

class Student extends Teenager{
    @Override 
    void introduce(){
        System.out.println("Hi, I am a student.");
    }
}

class Child extends Teenager{
    @Override 
    void introduce(){
        System.out.println("Hi, I am a child.");
    }
}