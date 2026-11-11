import java.util.ArrayList;
import java.util.List;

public class Demo2 {
    public static void main(String[] args) {
        // List<Dog> dogs = new ArrayList<>();
        // dogs.add(new Dog());
        // dogs.add(new Dog());

        // fun(dogs);

        List<Animal> animals = new ArrayList<>();
        animals.add(new Animal());
        animals.add(new Animal());

        fun(animals);
    }

    // static void fun(List<Animal> animals){
    //     for(Animal animal:animals){
    //         animal.eat();
    //     }
    // }

    static void fun(List<?> list){
        // for(Object ele:list){
        //     System.out.println(ele.getClass().getName());
        // }
        // list.add(new Dog());
        Object obj = list.get(0);
        Animal a = (Animal) obj;
        System.out.println(obj.getClass().getName());
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