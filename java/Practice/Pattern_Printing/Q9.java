import java.util.Scanner;

public class Q9 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter number of lines : ");
        int n=sc.nextInt();

        for(int i=1;i<=n;i++){
            for(int s=1;s<=i-1;s++){
                System.out.print(" ");
            }
            for(int j=n+1-i;j>=1;j--){
                System.out.print("* ");
            }
            System.out.println();
        }

        sc.close();
    }
}
