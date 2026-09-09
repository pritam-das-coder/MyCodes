import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Demo3 {
    public static void main(String[] args) throws IOException {
        // InputStreamReader isr = new InputStreamReader(System.in);

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // String name = br.readLine();
        // System.out.println(name);

        int x = Integer.parseInt(br.readLine());
        System.out.println(x);
    }
}
