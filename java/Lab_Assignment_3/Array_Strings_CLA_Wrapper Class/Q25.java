// Accept a integer number as Command line argument from the program and
// when the program is executed print the binary, octal and hexadecimal
// equivalent of the given number.

public class Q25 {
    public static void main(String[] args) {
        if(args.length == 0){
            System.out.println("No command line argument given");
        }
        else{
            BaseConvertor bc = new BaseConvertor(Integer.parseInt(args[0]));
            bc.display();
        }
    }
}

class BaseConvertor{
    private int num;

    BaseConvertor(int num){
        this.num = num;
    }

    String convert(int base){
        int rem = 0, n = num;
        String res = "", x = "";
        while(n!=0){
            rem = n%base;
            
            if(rem>9) x = String.valueOf((char)((rem-9)+64));
            else x = String.valueOf(rem);

            res = x + res;
            n = n/base;
        }
        return res;
    }

    void display(){
        System.out.println("Binary Equivalent : "+convert(2));
        System.out.println("Octal Equivalent : "+convert(8));
        System.out.println("Hexadecimal Equivalent : "+convert(16));
    }
}