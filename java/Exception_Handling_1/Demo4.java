// Exception Handling in chain of method
public class Demo4 {
    public static void main(String[] args) {
        int a = 5;
        int b = 0;

        try{
            methodA(a,b);
        }
        catch(ArithmeticException e){
            // System.out.println("Division by zero not allowed");
            e.printStackTrace();
        }
    }

    public static void methodA(int a, int b){
        methodB(a, b);
        System.out.println("Method A");
    }

    public static void methodB(int a, int b){
        System.out.println(a/b);
    }
}
