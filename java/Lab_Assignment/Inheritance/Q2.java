// Write a Java program to show method overriding.
public class Q2 {
    public static void main(String[] args) {
        Animal animal = new Animal();
        animal.makeSound();

        Dog dog = new Dog();
        dog.makeSound();
    }
}

class Animal{
    void makeSound(){
        System.out.println("The animal is making sound");
    }
}

class Dog extends Animal{
    @Override 
    void makeSound(){
        System.out.println("The dog is barking");
    }
}