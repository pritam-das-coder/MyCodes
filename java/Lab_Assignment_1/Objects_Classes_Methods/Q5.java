// Modify the above program using constructors and overloaded constructors.
// Create overloaded constructors to assign default values say (-1.00) to each
// data members, to assign some initial values, to make a cube (only one
// parameter).
import java.util.Scanner;

public class Q5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Box 1 details (User Input) : ");
        Box b1 = new Box();
        b1.getdata(sc);
        b1.displaydata();

        System.out.println("Box 2 details (Default Values) : ");
        Box b2 = new Box();
        b2.displaydata();

        System.out.println("Box 3 details (Cube) : ");
        Box b3 = new Box(4.5);
        b3.displaydata();

        System.out.println("Box 4 details (Custom Initial Values) : ");
        Box b4 = new Box(2,3,6);
        b4.displaydata();

        sc.close();
    }
}

class Box{
    private double length;
    private double breadth;
    private double height;

    Box(){
        length = -1.0;
        breadth = -1.0;
        height = -1.0;
    }

    Box(double dimension){
        length = breadth = height = dimension;
    }

    Box(double length, double breadth, double height){
        this.length = length;
        this.breadth = breadth;
        this.height = height;
    }

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
