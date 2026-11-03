// Using the concept of throws and thow statement implement the divide by zero exception.

import java.util.Scanner;

public class Q3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter divident : ");
        int divident = sc.nextInt();
        System.out.print("Enter divisor : ");
        int divisor = sc.nextInt();

        ThrowsThrowImplement eh = new ThrowsThrowImplement(divident, divisor);
        try{
            eh.calcDiv();
        }
        catch(ArithmeticException e){
            System.out.println(e.getMessage());
        }
        
        sc.close();
    }
}

class ThrowsThrowImplement{
    private int divident;
    private int divisor;

    public ThrowsThrowImplement(int divident, int divisor){
        this.divident = divident;
        this.divisor = divisor;
    }

    public void calcDiv() throws ArithmeticException{
        int quotient = 0;
        if(divisor == 0){
            throw new ArithmeticException("Divide by zero not allowed");
        }
        else{
            quotient = divident / divisor;
            System.out.println(divident+"/"+divisor+"="+quotient);
        }
    }
}