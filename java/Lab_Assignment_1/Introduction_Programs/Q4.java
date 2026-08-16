// Write a JAVA Program to find whether a number is palindrome or not.

import java.util.Scanner;

public class Q4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a number : ");
        int num = sc.nextInt();

        Palindrome p = new Palindrome(num);

        p.checkPal();
        
        sc.close();
    }
}

class Palindrome{
    private int n;

    Palindrome(int n){
        this.n = n;
    }

    int rev(int n){
        int r = 0;

        for(int i = n;i > 0;i /= 10){
            int d = i % 10;
            r = r*10 + d;
        }

        return r;
    }

    void checkPal(){
        if(n == rev(n))
            System.out.println(n+" is Palindrome");
        else
            System.out.println(n+" is not Palindrome");
    }
}
