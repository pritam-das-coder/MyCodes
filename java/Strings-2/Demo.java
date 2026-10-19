import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;

public class Demo {
    public static void main(String[] args) {
        // String s = new String();
        // String s = new String("Pritam");

        // char array subset
        // char ch[] = {'A','s','i','a','n',' ','G','a','m','e','s'};
        // String s = new String(ch,6,5); // start index, no. of chars

        // byte array subset
        byte b[] = {9,95,9,96,9,102};
        String s = new String(b,StandardCharsets.UTF_16);

        // StringBuilder sb = new StringBuilder("Pritam");
        // String s = new String(sb);
        System.out.println(s);
    }
}
