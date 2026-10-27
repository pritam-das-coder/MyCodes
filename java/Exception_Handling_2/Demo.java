public class Demo {
    public static void main(String[] args) {
        outer:
        try{
            System.out.println("Outer try starts");
            inner:
            try{
                System.out.println("Inner try starts");

                System.out.println(5/0); // new ArithmeticException("--")

                System.out.println("Inner try ends");
            }
            catch(ArithmeticException e){
                System.out.println("Divide by zero not allowed: Inner");
            }
            System.out.println("Outer try ends");
        }
        catch(ArithmeticException e){
            System.out.println("Divide by zero not allowed: Outer");
        }
    }
}
/*
Outer try starts
Inner try starts
Divide by zero not allowed: Inner
Outer try ends
 */
