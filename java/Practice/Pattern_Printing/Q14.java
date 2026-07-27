import java.util.Scanner;

public class Q14 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter number of lines : ");
        int n=sc.nextInt();
        
        for(int i=0;i<n;i++){
            for(int s=1;s<=(n-1-i);s++){
                System.out.print(" ");
            }
            int c=1;
            for(int j=0;j<=i;j++){
                if(j!=0) c=(c*(i-j+1))/j;
                System.out.print(c+" ");
            }
            System.out.println();
        }

        sc.close();
    }
}
