public class Demo9 {
    public static void main(String[] args) {
        
    }
}

class A{
    void fun(){
        System.out.println("A");
    }
}

class B extends A{
    void fun2(){
        super.fun();
    }
}