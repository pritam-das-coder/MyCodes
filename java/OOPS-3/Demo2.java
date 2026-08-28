public class Demo2 {
    public static void main(String[] args) {
        Car c = new ElectricCar();
        c.start();
        c.accelerate();
        c.brake();
    }
}

interface Car{
    void start();
    void accelerate();
    void brake();
}

class ElectricCar implements Car{
    @Override
    public void start(){
        System.out.println("Electric Car started");
    }

    @Override
    public void accelerate(){
        System.out.println("Electric Car speed up");
    }

    @Override
    public void brake(){
        System.out.println("Electric Car stopping");
    }
}

class FuelCar implements Car{
    @Override
    public void start(){
        System.out.println("Fuel Car started");
    }

    @Override
    public void accelerate(){
        System.out.println("Fuel Car speed up");
    }

    @Override
    public void brake(){
        System.out.println("Fuel Car stopping");
    }
}