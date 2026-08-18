// Create a “circle” class & a “point” class. The coordinates of the circle are given
// and used within the “circle” class as object of the “point” class. Display the
// area of circle.

import java.util.Scanner;

public class Q1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the radius : ");
        double radius = sc.nextDouble();
        System.out.println("Enter x-coordinate of center of circle : ");
        double x = sc.nextDouble();
        System.out.println("Enter y-coordinate of center of circle : ");
        double y = sc.nextDouble();

        Circle ob = new Circle(x, y, radius);
        System.out.println("The area of circle is "+ ob.calcArea());

        sc.close();
    }
}

class Point{
    private double x;
    private double y;

    Point(double x, double y){
        this.x = x;
        this.y = y;
    }
}

class Circle{
    private double radius;
    private Point centre;

    Circle(double x, double y, double radius){
        centre = new Point(x, y);
        this.radius = radius;
    }

    public double calcArea(){
        return (Math.PI * radius * radius);
    }
}