// Write a java program that takes input from command line argument.
public class Q22 {
    public static void main(String[] args) {
        CommandLineOperation clo = new CommandLineOperation(args);
        clo.print();
    }
}

class CommandLineOperation{
    private String[] arr;

    public CommandLineOperation(String[] arr){
        this.arr = arr;
    }

    public void print(){
        if(arr.length == 0) System.out.println("No command-line argument given.");
        else{
            System.out.println("Number of command-line argument given : "+arr.length);
            for(int i=0;i<arr.length;i++){
                System.out.println(arr[i]);
            }
        }
    }
}