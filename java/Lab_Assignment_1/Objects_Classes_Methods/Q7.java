// Write a program in java to implement method overloading for implementing
// polymorphism.
public class Q7 {
    public static void main(String[] args) {
        MethodOverloading mo = new MethodOverloading();

        System.out.println("Adding two integers (10 + 20): " + mo.add(10, 20));
        System.out.println("Adding three integers (10 + 20 + 30): " + mo.add(10, 20, 30));
        System.out.println("Adding two doubles (10.5 + 20.5): " + mo.add(10.5, 20.5));
    }
}
class MethodOverloading {

    public int add(int a, int b) {
        return a + b;
    }

    public int add(int a, int b, int c) {
        return a + b + c;
    }

    public double add(double a, double b) {
        return a + b;
    }
}