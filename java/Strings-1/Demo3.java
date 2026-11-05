public class Demo3 {
    public static void main(String[] args) {
        // String s = "";
        // for(int i=0;i<5;i++){
        //     s+=i;
        //     System.out.println(s);
        // }
        // System.out.println((int)'v');
        String s1 = "Hello";
        String s2 = "lo";
        String s3 = "Hel"+s2;
        System.out.println(s1.equals(s3)); // true
        System.out.println(s1.hashCode()+" "+s3.hashCode());
    }
}
