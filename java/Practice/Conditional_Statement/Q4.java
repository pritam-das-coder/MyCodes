import java.util.*;
public class Q4 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter two integers : ");
        int i=sc.nextInt();
        int j=sc.nextInt();

        if(i>j){
            System.out.println(i+" is greater");
        }
        else if(i<j){
            System.out.println(j+" is greater");
        }
        else{
            System.out.println("Both are equal");
        }

        sc.close();
    }
}
