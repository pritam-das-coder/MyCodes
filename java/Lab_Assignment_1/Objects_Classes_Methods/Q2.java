// Write a Program in JAVA to find the factorial of a number with two methods
// getdata() and calculatefact() by creating objects.

import java.util.Scanner;

public class Q2 {
    public static void main(String[] args) {
        Factorial fact = new Factorial();
        fact.getdata();
        fact.calculatefact();
    }
}

class Factorial{
    private int n;

    void getdata(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number : ");
        n = sc.nextInt();
        sc.close();
    }

    void calculatefact(){
        if(n<0){
            System.out.println("Factorial of negative number not possible.");
            System.exit(0);
        }
        long f = 1;
        for(int i=2;i<=n;i++){
            f *= i;
        }
        System.out.println("The factorial of "+n+" is "+f);
    }
}