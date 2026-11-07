public class Demo1 {
    public static void main(String[] args) {
        // Upcasting
        String s = "Hello";
        Object obj = s;

        System.out.println(obj.toString()); // why?

        // Downcasting
        // Object obj = "Hello";
        // String s = (String)obj;

        // System.out.println(s);

        // Object obj = 10;
        // String s = (String)obj;
        // System.out.println(s); // ClassCastException
    }
}
