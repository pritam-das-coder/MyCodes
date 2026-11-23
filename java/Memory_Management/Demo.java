import java.util.*;

public class Demo {
    public static void main(String[] args) {
        List<int[]> list = new ArrayList<>();
        int count = 0;

        while(true){
            list.add(new int[250000]); // 1000000 bytes = 0.953674316 MB
            count++;
            System.out.println("Allocated Block : "+count);
        }
    }
}
