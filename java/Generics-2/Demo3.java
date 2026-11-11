import java.util.ArrayList;
import java.util.List;

// Wildcard with upper bound(extends)

public class Demo3 {
    public static void main(String[] args) {
        // List<Dog> dogs = new ArrayList<>();
        // dogs.add(new Dog());
        // dogs.add(new Dog());

        // fun(dogs);
        
        // List<Animal> animals = new ArrayList<>();
        // animals.add(new Animal());
        // animals.add(new Animal());

        // fun(animals);

        List<Cat> cats = new ArrayList<>();
        cats.add(new Cat());
        cats.add(new Cat());

        fun(cats);
    }

    static void fun(List<? extends Animal> values){
        for(Animal a:values){
            a.eat();
        }
        // values.add(new Cat());
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

class Cat extends Animal{
    @Override 
    void eat(){
        System.out.println("Cat is eating.");
    }
}