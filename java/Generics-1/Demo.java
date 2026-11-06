public class Demo {
    public static void main(String[] args) {
        Animal a = new Dog();
        a.walk();
        // a.bark();

        Dog d = new Dog();
        d.walk();
        d.bark();
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