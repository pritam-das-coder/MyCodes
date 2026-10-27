public class Demo4 {
    public static void main(String[] args) {
        try{
            System.out.println(5/0);

            String s = null;
            System.out.println(s.length());

            // Object obj = "Hello";
            // Integer i = (Integer)obj; // new ClassCastException()
        }
        catch(ArithmeticException | NullPointerException e){ // not recommended
            System.out.println(e.getMessage());
        }
        // catch(NullPointerException e){
        //     System.out.println(e.getMessage());
        // }
        catch(RuntimeException e){
            System.out.println("Runtime Exception occured");
        }
        catch(Exception e){
            System.out.println("Exception occured");
        }
    }
}
