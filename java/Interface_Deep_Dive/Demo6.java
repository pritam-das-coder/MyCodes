public class Demo6 {
    public static void main(String[] args) {
        Vehicle v = new Car();
        v.drive();

        // Vehicle.brake();
    }
}

// After Java 8 --> Default Methods, Static methods
// From Java 9 -> Private methods

// List Interface --> methods

// interface List {
//     default void pushBack() {

//     }
// }

interface Vehicle{
    default void drive(){
        System.out.println("Vehicle is driving");
        accelerate();
    }

    static void brake(){
        System.out.println("Vehicle is applying brake");
    }

    private void accelerate(){
        System.out.println("Vehicle is accelerating");
    }

    void fun();
}

class Car implements Vehicle{
    public void fun(){

    }

    public static void brake(){
        
    }
    // @Override 
    // public void drive(){
    //     System.out.println("Car is driving");
    // }
}