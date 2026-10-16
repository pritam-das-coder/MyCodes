public class Demo {
    public static void main(String[] args) {
        // String -> Immutable
        // String str = "Hello";
        // str.concat(" World");
        // System.out.println(str);

        // String s1 = "Hello"; // Literal -> stored in String Pool
        // String s2 = "Hello";

        // System.out.println(s1==s2);
        // System.out.println(s1.equals(s2));

        String s1 = new String("Hello"); // stored in heap
        String s2 = new String("Hello");

        System.out.println(s1==s2);
        System.out.println(s1.equals(s2));
    }
}
