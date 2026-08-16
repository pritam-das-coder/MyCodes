// Write a java program to find out the Area of a Circle.

import java.util.Scanner;

public class Q1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the radius of circle : ");
        double r = sc.nextDouble();

        Circle cir = new Circle(r);
        System.out.println("The area of circle is "+cir.calcArea());

        sc.close();
    }
}

class Circle{
    private double radius;

    Circle(double radius){
        this.radius = radius;
    }

    public double calcArea(){
        return (Math.PI * radius * radius);
    }
}