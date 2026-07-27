import java.util.Scanner;

public class Q6 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int marks=sc.nextInt();

        if(marks<0 || marks>100){
            System.out.println("Marks is between 0 and 100");
            // sc.close();
            // return;
            System.exit(0);
        }

        if(marks>=90)
            System.out.println("Grade A");
        else if(marks>=75)
            System.out.println("Grade B");
        else if(marks>=60)
            System.out.println("Grade C");
        else if(marks>=40)
            System.out.println("Grade D");
        else
            System.out.println("Fail");

        sc.close();
    }
}
