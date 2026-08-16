// Write a Java program to check whether a given number is Armstrong Number or not.

import java.util.Scanner;

public class Q7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a number : ");
        int n = sc.nextInt();

        ArmstrongNumber an = new ArmstrongNumber(n);
        
        an.isArmstrong();

        sc.close();
    }
}

class ArmstrongNumber{
    private int n;

    ArmstrongNumber(int n){
        this.n = n;
    }

    int noOfDigits(int n){
        int x = 0;

        for(int i=n;i>0;i/=10){
            x++;
        }

        return x;
    }
    
    void isArmstrong(){
        int sum = 0;
        int x = noOfDigits(n);

        for(int i=n;i>0;i/=10){
            int d = i % 10;
            sum += (int)Math.pow(d, x);
        }

        if(sum == n) System.out.println(n+" is an Armstrong Number");
        else System.out.println(n+" is not an Armstrong Number");
    }
}