public class Demo2 {
    public static void main(String[] args) {
        Outer outer = new Outer();

        // Outer.Inner inner = new Outer.Inner();
        Outer.Inner inner = outer.new Inner();
        // Outer.Inner inner = new Outer().new Inner();
        // inner.fun();
        inner.fun2();
        Outer.Inner.fun2();

    }
}

class Outer{
    int x = 10;
    class Inner{
        // Outer outer;
        // int x = 20;
        static int x = 20;
        void fun(){
            System.out.println(x);
            System.out.println(Outer.this.x);
        }

        static void fun2(){
            System.out.println("Hello");
        }
    }
}