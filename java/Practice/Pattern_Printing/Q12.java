import java.util.Scanner;

public class Q12 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number : ");
        int n=sc.nextInt();
        
        int k=0;
        for(int i=1;i<=(2*n-1);i++){
            if(i<=n) k=i;
            else k=2*n-i;
            for(int s=1;s<=n-k;s++){
                System.out.print(" ");
            }
            for(int j=1;j<=k;j++){
                System.out.print("* ");
            }
            System.out.println();
        }

        sc.close();
    }
}
