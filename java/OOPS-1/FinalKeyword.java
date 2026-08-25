public class FinalKeyword {

    static void fun(final int i){
        // i = 2;
        System.out.println(i);
    }
    public static void main(String[] args) {
        // Random r = new Random();
        System.out.println(Random.PI);
        // Random.PI = 4.4;
        fun(23);
    }
}

class Random{
    static final double PI;

    static{
        PI = 3.14;
    }
}