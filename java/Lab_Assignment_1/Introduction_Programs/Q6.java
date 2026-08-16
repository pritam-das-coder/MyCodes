// Write a Java program to display prime numbers between a given interval.

import java.util.Scanner;

public class Q6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the upper and lower limit respectively : ");
        int u = sc.nextInt();
        int l = sc.nextInt();

        PrimeNumber pn = new PrimeNumber(u,l);

        pn.printPrimeInInterval();

        sc.close();
    }
}

class PrimeNumber{
    private int a;
    private int b;

    PrimeNumber(int a, int b){
        this.a = a;
        this.b = b;
    }

    boolean isPrime(int n){
        for(int i=2;i<n;i++){
            if(n%i==0) return false;
        }

        return true;
    }
    void printPrimeInInterval(){
        System.out.println("The required Prime Numbers are :");
        for(int i=a+1;i<b;i++){
            if(isPrime(i))
                System.out.println(i);
        }
    }
}