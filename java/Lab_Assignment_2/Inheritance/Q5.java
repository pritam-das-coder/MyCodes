// Write a program to create a class named shape. In this class we have three
// sub classes circle, triangle and square each class has two member function
// named draw () and erase (). Create these using polymorphism concepts.
public class Q5 {
    public static void main(String[] args) {
        Shape sh = new Circle();
        sh.draw();
        sh.erase();

        sh = new Triangle();
        sh.draw();
        sh.erase();

        sh = new Square();
        sh.draw();
        sh.erase();
    }
}

abstract class Shape{
    abstract void draw();
    abstract void erase();
}

class Circle extends Shape{
    @Override 
    void draw(){
        System.out.println("Drawing a circle.");
    }

    @Override 
    void erase(){
        System.out.println("Erasing a circle.");
    }
}

class Triangle extends Shape{
    @Override 
    void draw(){
        System.out.println("Drawing a triangle.");
    }

    @Override 
    void erase(){
        System.out.println("Erasing a triangle.");
    }
}

class Square extends Shape{
    @Override 
    void draw(){
        System.out.println("Drawing a square.");
    }

    @Override 
    void erase(){
        System.out.println("Erasing a square.");
    }
}