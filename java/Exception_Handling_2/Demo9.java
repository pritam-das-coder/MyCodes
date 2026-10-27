import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class Demo9 {
    public static void main(String[] args) throws IOException{
        try(FileReader fr = new FileReader("abc.txt")){
            
        }
        catch(FileNotFoundException e){

        }
    }
}
