// Program to demonstrate use of hierarchical inheritance using interface.
public class Q14 {
    public static void main(String[] args) {
        Car car = new Car();
        car.drive();

        Bike bike = new Bike();
        bike.drive();
    }
}

interface Vehicle{
    void drive();
}

class Car implements Vehicle{
    @Override 
    public void drive(){
        System.out.println("Car is being driven");
    }
}

class Bike implements Vehicle{
    @Override 
    public void drive(){
        System.out.println("Bike is being driven");
    }
}