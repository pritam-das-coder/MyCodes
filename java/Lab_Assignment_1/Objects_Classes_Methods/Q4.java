// Create a class Box having fields length, breadth, height and methods
// getdata() and displaydata(). Make two objects of the class access fields by
// the methods.

import java.util.Scanner;

public class Q4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Box 1 details : ");
        Box b1 = new Box();
        b1.getdata(sc);
        b1.displaydata();

        System.out.println("Box 2 details : ");
        Box b2 = new Box();
        b2.getdata(sc);
        b2.displaydata();

        sc.close();
    }
}

class Box{
    private double length;
    private double breadth;
    private double height;

    void getdata(Scanner sc){
        System.out.print("Enter the length of box : ");
        length = sc.nextDouble();
        System.out.print("Enter the breadth of box : ");
        breadth = sc.nextDouble();
        System.out.print("Enter the height of box : ");
        height = sc.nextDouble();
    }

    void displaydata(){
        System.out.println("The length of the box is "+length);
        System.out.println("The breadth of the box is "+breadth);
        System.out.println("The height of the box is "+height);
    }
}