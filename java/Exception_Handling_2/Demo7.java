import java.io.FileNotFoundException;
import java.io.FileReader;

public class Demo7 {
    public static void main(String[] args) throws FileNotFoundException{
        readFile();
    }

    private static void readFile() throws FileNotFoundException{
        FileReader fr = new FileReader("abc.txt");
    }
}
