public class Demo5 {
    public static void main(String[] args) {
        System.out.println("Step 1");
        try{
            int a = 5;
            int b = 0;
            System.out.println(a/b); // illegal -> new ArithmeticException("/ by zero")
            System.out.println("Heyy");
        }
        catch(ArithmeticException e){
            // System.out.println(e.getMessage());
            e.printStackTrace();
        }
        finally{
            System.out.println("Hi");
        }
        System.out.println("Step 2");
    }
}
