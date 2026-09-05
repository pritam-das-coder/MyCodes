public class Demo3 {
    public static void main(String[] args) {
        Outer outer = new Outer();
        outer.greet();
    }
}

class Outer{
    void greet(){
        int y = 5;
        class Local{
            void sayHello(){
                System.out.println(y);
            }
        }
        // y++;
        Local local = new Local();
        local.sayHello();
    }
}