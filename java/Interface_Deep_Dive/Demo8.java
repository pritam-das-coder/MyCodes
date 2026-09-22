public class Demo8 {
    public static void main(String[] args) {
        C c = new C();
        c.fun();
    }
}

// Java Resolution Priority Rule

interface A{
    default void fun(){
        System.out.println("Inside A interface");
    }
}

class B{
    public void fun(){
        System.out.println("Inside B class");
    }
}

class C extends B implements A{
    // @Override 
    public void fun(){
        // B.super.fun();
        super.fun();
        A.super.fun();
        System.out.println("Inside C class");
    }
}