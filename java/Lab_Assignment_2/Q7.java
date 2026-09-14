// Write a program in java to illustrate multilevel inheritance.
public class Q7 {
    public static void main(String[] args) {
        C c = new C();
        c.funA();
        c.funB();
        c.funC();
    }
}

class A{
    void funA(){
        System.out.println("Method of class A.");
    }
}

class B extends A{
    void funB(){
        System.out.println("Method of class B.");
    }
}

class C extends B{
    void funC(){
        System.out.println("Method of class C.");
    }
}