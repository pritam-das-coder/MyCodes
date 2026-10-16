public class Demo2 {
    public static void main(String[] args) {
        // String s1 = "java";
        // String s2 = "ja"+"va"; // resolved in compile-time
        // System.out.println(s1==s2);

        String s1 = "ja";
        String s2 = s1+"va"; // resolved in runtime
        String s3 = "java";
        System.out.println(s3==s2);
    }
}
