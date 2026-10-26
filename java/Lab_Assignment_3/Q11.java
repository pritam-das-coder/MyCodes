// Show two ways to concatenate the following two strings together to get the
// string “Hi, Mom”:
// String hi=”Hi”;
// String mom=”mom”;

import java.util.Scanner;

public class Q11 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first string : ");
        String s1 = sc.nextLine();
        System.out.print("Enter second string : ");
        String s2 = sc.nextLine();

        StringConcat s = new StringConcat(s1, s2);
        s.concatenate1();
        s.concatenate2();

        sc.close();
    }
}

class StringConcat{
    String s1, s2;

    StringConcat(String s1, String s2){
        this.s1 = s1;
        this.s2 = s2;
    }

    String modify(String t){
        return Character.toUpperCase(t.charAt(0)) + t.substring(1);
    }

    void concatenate1(){
        String s = s1 + ", " + modify(s2);
        System.out.println("Method 1(Using + operator) : "+s);
    }

    void concatenate2(){
        String s = s1.concat(", ".concat(modify(s2)));
        System.out.println("Method 2(Using concat() method) : "+s);
    }
}