public class dataTypes {
    public static void main(String[] args) {
        // Integer
        // byte b = 5; // decimal
        // byte b = 0b101; // binary
        // byte b = 027; // octal
        byte b = 0xB; // hexadecimal
        short s = 20;
        int i = 2000;
        long l = 5_34_356;

        System.out.println("Integer Values : " + b + "," + s + "," + i + "," + l);

        // Floating point
        float f = 3.14F;
        // double d = 4.9_01;
        double d = 6.02_2e23;

        System.out.println("Floating point Values : " + f + "," + d);

        // Character
        char ch = 'b';

        System.out.println("Character Values : " + ch);

        // Boolean
        boolean bool = false;

        System.out.println("Boolean Values : " + bool);
    }
}
