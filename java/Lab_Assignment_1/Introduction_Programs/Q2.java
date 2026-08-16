// Write a java program to compute the GCD of two numbers.

import java.util.Scanner;

public class Q2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter two numbers : ");
        int x = sc.nextInt();
        int y = sc.nextInt();

        GCD obj = new GCD(x,y);

        System.out.println("The GCD of "+x+" and "+y+" is "+obj.calc());
        
        sc.close();
    }
}

class GCD{
    private int a;
    private int b;

    GCD(int a, int b){
        this.a = Math.max(a, b);
        this.b = Math.min(a, b);
    }

    int calc(){
        int rem = a % b;
        while(rem!=0){
            a = b;
            b = rem;
            rem = a % b;
        }
        return b;
    }
}