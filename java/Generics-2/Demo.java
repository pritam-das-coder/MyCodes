import java.util.ArrayList;
import java.util.List;

public class Demo {
    public static void main(String[] args) {
        // Animal a = new Dog();
        // a.eat();
        // a.walk();

        // List<Dog> dogs = new ArrayList<>();
        // List<Animal> animals = dogs; // error

        Dog[] dogs = new Dog[10];
        Animal[] animals = dogs;

        animals[0] = new Dog();
        animals[1] = new Dog();
        animals[2] = new Dog();
        // animals[3] = new Animal(); // ArrayStoreException

        for(Animal animal : animals){
            if(animal == null) continue;
            animal.eat();
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
    void bark(){
        System.out.println("Animal is barking.");
    }
}