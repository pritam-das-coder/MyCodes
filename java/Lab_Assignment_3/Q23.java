// Write a program that reads an unspecified number to integer arguments from
// the command line and adds them together. For example, suppose that you
// enter the following:
// java Adder 1 2 3 10
// The program should display 16 and then exit. The program should display an
// error message if the user enters only one argument.

public class Q23 {
    public static void main(String[] args) {
        CommandLineAdder cla = new CommandLineAdder(args);
        cla.add();
    }
}

class CommandLineAdder{
    private String arr[];

    public CommandLineAdder(String arr[]){
        this.arr = arr;
    }

    public void add(){
        if(arr.length <= 1) System.out.println("Error! Give more than one argument.");
        else{
            int res = 0;
            for(int i=0;i<arr.length;i++){
                res += Integer.parseInt(arr[i]);
            }
            System.out.println("Total Sum = "+res);
        }
    }
}