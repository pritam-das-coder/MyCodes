package myPackage;

public class Demo{
    public static void main(String[] args) {
        Dog d = new Dog();
        d.bark();
        d.walk();
    }
}

class Animal{
    void walk(){
        System.out.println("Animal is walking.");
    }
}

class Dog extends Animal{
    void bark(){
        System.out.println("Dog is barking.");
    }
}