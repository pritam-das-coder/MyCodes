// Write a Java program to create a class called Shape with a method called
// getArea(). Create a subclass called Rectangle that overrides the getArea()
// method to calculate the area of a rectangle (use ‘super’ and ‘this’ keyword).

import java.util.Scanner;

public class Q3 {
    public static void main(String[] args) {
        Scanner sc = new  Scanner(System.in);

        System.out.print("Enter the length of rectangle : ");
        int l = sc.nextInt();
        System.out.print("Enter the breadth of rectangle : ");
        int b = sc.nextInt();

        Rectangle rect = new Rectangle(l, b);
        System.out.println("Area of rectangle is " + rect.getArea());

        sc.close();
    }
}

abstract class Shape{
    Shape(){}

    abstract int getArea();
}

class Rectangle extends Shape{
    int length;
    int breadth;

    Rectangle(int length, int breadth){
        super();
        this.length = length;
        this.breadth = breadth;
    }

    @Override 
    int getArea(){
        return (length * breadth);
    }
}