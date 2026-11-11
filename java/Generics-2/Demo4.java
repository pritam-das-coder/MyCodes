import java.util.ArrayList;
import java.util.List;

// Generics with Lower bound (super)

public class Demo4 {
    public static void main(String[] args) {
        List<Animal> animals = new ArrayList<>();
        animals.add(new Animal());
        animals.add(new Animal());

        fun(animals);

        // List<Object> objects = new ArrayList<>();
        // objects.add(2);
        // objects.add(5);

        // fun(objects);
    }

    public static void fun(List<? super Animal> values){
        // writing
        // values.add(new Animal());
        // values.add(new Dog());
        // values.add(new Cat());
        // values.add(new Labrador());

        // reading
        for(Object obj : values){
            Animal a = (Animal) obj;
            a.eat();
        }
    }
}

class Animal{
    void eat(){
        System.out.println("Animal is eating.");
    }
    void walk(){
        System.out.println("Animal is walking.");
    }
}

class Dog extends Animal{
    @Override 
    void eat(){
        System.out.println("Dog is eating.");
    }
    void bark(){
        System.out.println("Dog is barking.");
    }
}

class Labrador extends Dog{

}

class Cat extends Animal{

}