// Write a JAVA Program to make sum of digit (e.g. 821 = 8+2+1).

import java.util.Scanner;

public class Q3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a number : ");
        int num = sc.nextInt();

        SumOfDigits sod = new SumOfDigits(num);

        System.out.println("The sum of digits of "+num+" is "+sod.calc());

        sc.close();
    }
}

class SumOfDigits{
    private int n;

    SumOfDigits(int n){
        this.n = n;
    }

    int calc(){
        int sum = 0;
        for(int i = n;i > 0;i /= 10){
            sum += (i % 10);
        }
        return sum;
    }
}