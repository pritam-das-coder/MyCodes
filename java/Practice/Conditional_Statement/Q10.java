import java.util.Scanner;

public class Q10 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        
        int a=sc.nextInt();
        char ch=sc.next().charAt(0);
        int b=sc.nextInt();

        switch(ch){
            case '+':
                System.out.println("Result = "+(a+b));
                break;
            case '-':
                System.out.println("Result = "+(a-b));
                break;
            case '*':
                System.out.println("Result = "+(a*b));
                break;
            case '/':
                System.out.println("Result = "+((a*1.0)/b));
                break;
            default:
                System.out.println("Only +,-,*,/ are allowed");
        }

        sc.close();
    }
}
