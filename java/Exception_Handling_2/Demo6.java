import java.io.FileNotFoundException;
import java.io.FileReader;

public class Demo6 {
    public static void main(String[] args) {
        try{
            readFile();
        }
        catch(FileNotFoundException e){
            System.out.println("File not found");
        }
    }

    private static void readFile() throws FileNotFoundException{
        FileReader fr = new FileReader("abc.txt");
    }
}
