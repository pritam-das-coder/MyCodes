// Write a program in java to find Fibonacci series using constructors.

import java.util.Scanner;

public class Q3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of terms : ");
        int n = sc.nextInt();
        Fibonacci f = new Fibonacci(n);
        f.printFiboSeries();
        sc.close();
    }
}

class Fibonacci{
    private int n;

    Fibonacci(int n){
        this.n = n;
    }

    int findNthFiboNumber(int n){
        if(n==1) return 0;
        else if(n==2) return 1;
        else return findNthFiboNumber(n-1)+findNthFiboNumber(n-2);
    }

    void printFiboSeries(){
        System.out.println(n+" terms of Fibonacci Series : ");
        for(int i=1;i<=n;i++){
            System.out.println(findNthFiboNumber(i));
        }
    }
}