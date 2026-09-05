// Write a Java program to implement the concept of inheritance.
public class Q1{
    public static void main(String[] args) {
        Circle ob1 = new Circle(2, 3, 4);
        ob1.getCentre();
        ob1.moveCentre(4, 5);
        ob1.getCentre();

        Rectangle ob2 = new Rectangle(6, 9, 4, 2);
        ob2.getCentre();
        ob2.moveCentre(4, 5);
        ob2.getCentre();
    }
}

class Shape{
    int xcentre;
    int ycentre;

    Shape(int xcentre, int ycentre){
        this.xcentre = xcentre;
        this.ycentre = ycentre;
    }

    void moveCentre(int x, int y){
        xcentre = x;
        ycentre = y;
    }
}

class Circle extends Shape{
    int radius;
    
    Circle(int x, int y, int radius){
        super(x, y);
        this.radius = radius;
    }

    void getCentre(){
        System.out.println("The circle's centre is ("+xcentre+","+ycentre+")");
    }
}

class Rectangle extends Shape{
    int length;
    int breadth;

    Rectangle(int x, int y, int length, int breadth){
        super(x, y);
        this.length = length;
        this.breadth = breadth;
    }

    void getCentre(){
        System.out.println("The rectangle's centre is ("+xcentre+","+ycentre+")");
    }
}