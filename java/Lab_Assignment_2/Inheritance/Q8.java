// Design an abstract class having two methods. Create Rectangle and Triangle
// classes by inheriting the shape class and override the above methods
// to suitably implement for Rectangle and Triangle class.

import java.util.Scanner;

public class Q8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("-------Rectangle-------");
        System.out.print("Enter the length of rectangle : ");
        double length = sc.nextDouble();
        System.out.print("Enter the breadth of rectangle : ");
        double breadth = sc.nextDouble();

        System.out.println();

        Rectangle rect = new Rectangle(length, breadth);
        System.out.println("Area of rectangle : "+rect.getArea());
        System.out.println("Perimeter of rectangle : "+rect.getPerimeter());

        System.out.println("\n-------Triangle-------");
        System.out.print("Enter the length of first side of triangle : ");
        double side1 = sc.nextDouble();
        System.out.print("Enter the length of second side of triangle : ");
        double side2 = sc.nextDouble();
        System.out.print("Enter the length of third side of triangle : ");
        double side3 = sc.nextDouble();

        System.out.println();

        Triangle tri = new Triangle(side1, side2, side3);
        System.out.println("Area of triangle : "+tri.getArea());
        System.out.println("Perimeter of triangle : "+tri.getPerimeter());

        sc.close();
    }
}

abstract class Shape{
    abstract double getArea();
    abstract double getPerimeter();
}

class Rectangle extends Shape{
    double length;
    double breadth;

    Rectangle(double length, double breadth){
        this.length = length;
        this.breadth = breadth;
    }

    @Override 
    double getArea(){
        return (length * breadth);
    }

    @Override 
    double getPerimeter(){
        return (2*(length + breadth));
    }
}

class Triangle extends Shape{
    double side1;
    double side2;
    double side3;

    Triangle(double side1, double side2, double side3){
        this.side1 = side1;
        this.side2 = side2;
        this.side3 = side3;
    }

    @Override 
    double getArea(){
        double s = getPerimeter()/2;
        return (Math.sqrt(s * (s - side1) * (s - side2) * (s - side3)));
    }

    @Override 
    double getPerimeter(){
        return (side1 + side2 + side3);
    }
}
