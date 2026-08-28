public class Demo1 {
    public static void main(String[] args) {
        Car c = new ElectricCar();
        c.start();
        c.accelerate();
        c.brake();
    }
}

abstract class Car{
    void start(){
        System.out.println("Car started");
    }

    abstract void accelerate();

    abstract void brake();
}

class FuelCar extends Car{
    @Override
    void accelerate(){
        System.out.println("Fuel Car is accelerated");
    }

    @Override
    void brake(){
        System.out.println("Fuel Car is stopping");
    }
}

class ElectricCar extends Car{
    @Override
    void accelerate(){
        System.out.println("Electric Car is accelerated");
    }

    @Override
    void brake(){
        System.out.println("Electric Car is stopping");
    }
}