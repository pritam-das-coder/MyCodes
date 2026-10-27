public class Demo2 {
    public static void main(String[] args) {
        try{
            System.out.println("Outer try starts");
            try{
                System.out.println("Inner try starts");

                System.out.println(5/0); // new ArithmeticException("--")

                System.out.println("Inner try ends");
            }
            catch(NullPointerException e){
                System.out.println("Nulls not allowed");
            }
            System.out.println("Outer try ends");
        }
        catch(ArithmeticException e){
            System.out.println("Divide by zero not allowed : Outer");
        }
    }
}
/*
Outer try starts
Inner try starts
Divide by zero not allowed : Outer
*/