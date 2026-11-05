// Write a java program where one function will throw an user defined
// Exception (suppose no integer value should not be greater than 1000) to a
// function from where it was called and there it will be catch.

import java.util.Scanner;

public class Q4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a integer : ");
        int n = sc.nextInt();

        NumberChecker eg = new NumberChecker(n);
        eg.caller();
        
        sc.close();
    }
}

class NumberChecker{
    int n;

    public NumberChecker(int n){
        this.n = n;
    }

    void checkNumber() throws ValueGreaterThanThousand{
        if(n > 1000){
            throw new ValueGreaterThanThousand("No integer value should be greater than 1000");
        }
        else{
            System.out.println("The given integer is "+n);
        }
    }

    void caller(){
        try{
            checkNumber();
        }
        catch(ValueGreaterThanThousand e){
            System.out.println(e.getMessage());
        }
    }
}

class ValueGreaterThanThousand extends Exception{
    public ValueGreaterThanThousand(String message){
        super(message);
    }
}