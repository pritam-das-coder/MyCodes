// Write a program to define a class Fraction having data members
// numerator and denominator. Initialize three objects using different
// constructors and display its fractional value.

import java.util.Scanner;

public class Q6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Fraction 1 (Default Value) :");
        Fraction f1 = new Fraction();
        f1.displayFractionalValue();

        System.out.println("Fraction 1 (Initial Value) :");
        Fraction f2 = new Fraction(2,4);
        f2.displayFractionalValue();

        System.out.println("Fraction 1 (User Input) :");
        Fraction f3 = new Fraction(sc);
        f3.displayFractionalValue();

        sc.close();
    }
}

class Fraction{
    private int numerator;
    private int denominator;

    Fraction(){
        numerator = -1;
        denominator = -1;
    }

    Fraction(int numerator, int denominator){
        if(denominator == 0){
            System.out.println("Denomenator  can't be zero. ");
            System.exit(0);
        }
        this.numerator = numerator;
        this.denominator = denominator;
    }

    Fraction(Scanner sc){
        System.out.println("Enter the numerator : ");
        numerator = sc.nextInt();
        System.out.println("Enter the denomenator : ");
        denominator = sc.nextInt();
        if(denominator == 0){
            System.out.println("Denomenator  can't be zero. ");
            System.exit(0);
        }
    }

    void displayFractionalValue(){
        System.out.println("Output : "+ ((double)numerator/denominator));
    }
}