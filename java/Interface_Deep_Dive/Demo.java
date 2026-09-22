public class Demo {
    public static void main(String[] args) {
        // Thar thar = new BlackThar();
        // thar.drive();

        Car car = new BlackThar();
        car.drive();
    }
}

interface Car{
    void drive(); // By default public
}

abstract class Thar implements Car{
    public abstract void drive();
}

class BlackThar extends Thar{
    public void drive(){
        System.out.println("The car is being driven.");
    }
}

// class A{
//     protected void fun(){

//     }
// }

// class B extends A{
//     public void fun(){

//     }
// }