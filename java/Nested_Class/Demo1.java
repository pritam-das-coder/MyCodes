public class Demo1 {
    public static void main(String[] args) {
        Outer outer = new Outer();

        Outer.Inner inner = new Outer.Inner(outer);
        inner.fun();
        // Outer.Inner.fun();
    }
}

class Outer{
    private static int x = 4;
    int y;

    static class Inner{
        Outer outer;
        private String name;
        private static int number;

        Inner(Outer outer){
            this.outer = outer;
        }

        void fun(){
            System.out.println(x);
            System.out.println(outer.y);
        }

        static void fun2(){

        }
    }
}

class BankAccount{
    // fields
    private static class InterestCalculator{
        static double calculateYearly(double principal, double rate){
            return principal*rate;
        }

        static double calculateHalfYearly(double principal, double rate){
            // logic
            return 0.0;
        }

    }

    public double computeInterest(double principal){
        return InterestCalculator.calculateYearly(principal, 0.09);
    }

}