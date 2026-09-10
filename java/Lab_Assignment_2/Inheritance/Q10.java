// Write a program to create a Interface Flying which contain one member
// variable with value 10 and a method fly(). Now implements the interface for
// Bird Class and Plane class, prints some message from bird and plane class using fly().
public class Q10 {
    public static void main(String[] args) {
        Bird bird = new Bird();
        bird.fly();

        Plane plane = new Plane();
        plane.fly();
    }
}

interface Flying{
    int speed = 10;
    void fly();
}

class Bird implements Flying{
    @Override 
    public void fly(){
        System.out.println("Bird is flying at a speed of "+speed+" units.");
    }
}

class Plane implements Flying{
    @Override 
    public void fly(){
        System.out.println("Plane is flying at a speed of "+speed+" units.");
    }
}