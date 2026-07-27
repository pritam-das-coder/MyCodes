import java.util.*;
public class Q1 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter an integer : ");
        int i=sc.nextInt();

        if(i>0) System.out.println("Positive Number");
        else System.out.println("Not Positive Number");

        sc.close();
    }
}
