public class Demo3 {
    public static void main(String[] args) {
        try{
            System.out.println("Outer try starts");
            String s = null;
            System.out.println(s.length());
            System.out.println("Outer try ends");
        }
        catch(NullPointerException e){
            try{
                System.out.println("Inner try starts");

                System.out.println(5/0); // new ArithmeticException("--")

                System.out.println("Inner try ends");
            }
            catch(NullPointerException e1){
                System.out.println("Nulls not allowed: Inner");
            }
            catch(ArithmeticException e2){
                System.out.println("Divide by zero not allowed: Inner");
            }
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
*/