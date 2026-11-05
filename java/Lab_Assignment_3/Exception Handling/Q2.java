// Write a program to handle “divide by zero exception” with the following
// message in finally block “Exception occurred” if the quotient part is -1
// otherwise print the result in finally block.

import java.util.Scanner;

public class Q2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter divident : ");
        int divident = sc.nextInt();
        System.out.print("Enter divisor : ");
        int divisor = sc.nextInt();

        ExceptionHandler eh = new ExceptionHandler(divident, divisor);
        eh.evaluateDiv();

        sc.close();
    }
}

class ExceptionHandler{
    private int divident;
    private int divisor;

    public ExceptionHandler(int divident, int divisor){
        this.divident = divident;
        this.divisor = divisor;
    }

    public void evaluateDiv(){
        int quotient = 0;
        try{
            quotient = divident / divisor;
        }
        catch(ArithmeticException e){
            quotient = -1;
        }
        finally{
            if(quotient == -1){
                System.out.println("Exception occurred");
            }
            else{
                System.out.println(divident+"/"+divisor+"="+quotient);
            }
        }
    }
}
