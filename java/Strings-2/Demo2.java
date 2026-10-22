public class Demo2 {
    public static void main(String[] args) {
        // Length/Emptiness

        // String s = "Asian Games";
        // String s = " \nt";
        // System.out.println(s.length());
        // System.out.println(s.isEmpty()); // no characters -> true
        // System.out.println(s.isBlank()); // empty or whitespace only

        // Character Access

        // String s = "Pritam is Indian";
        // System.out.println(s.charAt(4));
        // System.out.println(s[4]); // error
        // char ch[] = s.toCharArray();
        // for(char x : ch){
        //     System.out.println(x);
        // }

        // Comparison

        // String s1 = "Pritam";
        // String s2 = "Pritam";
        // System.out.println(s1.equalsIgnoreCase(s2));
        // System.out.println(s1.compareTo(s2));

        // Searching

        // String s = "India woa CWaC won";
        // System.out.println(s.contains("won"));
        // System.out.println(s.indexOf('a',5));
        // System.out.println(s.lastIndexOf("wo",8));
        // System.out.println(s.endsWith("won"));

        // Extraction

        // String s = "India is beautiful is";
        // String s2 = "India";
        // System.out.println(s.substring(4,8));
        // System.out.println(s.strip()); // unicode friendly
        // System.out.println(s2.repeat(3));
        // System.out.println(s.replace('i','x'));
        // System.out.println(s.replaceAll("is","hi"));
        // String st[] = s.split(" ");
        // for(String x:st){
        //     System.out.println(x);
        // }
        // System.out.println(String.join("-","India","is","good"));

        // Conversion

        // String s = String.valueOf(10.2);
        // System.out.println(s);

        // String s = "Pritam";
        // String s = "আম";
        // byte b[] = s.getBytes();
        // for(byte x: b){
        //     System.out.println(x);
        // }

        // Advance

        String s = new String("Hello");
        String s2 = s.intern(); // creates s in string pool
        System.out.println(s == s2);
        /* String pool : "Hello" <- s2
           Heap: s -> "Hello" 
         */

        String name = "Pritam";
        int age = 20;
        System.out.println(String.format("Hello %s, your age is %d",name,age));
    }
}
