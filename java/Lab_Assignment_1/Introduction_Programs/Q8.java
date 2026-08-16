// Patterns
import java.util.Scanner;

public class Q8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number of lines : ");
        int n = sc.nextInt();

        PatternPrint pp = new PatternPrint(n);

        System.out.println("Pattern 1 : ");
        pp.printPattern1();
        System.out.println("Pattern 2 : ");
        pp.printPattern2();
        
        sc.close();
    }
}

class PatternPrint{
    private int n;

    PatternPrint(int n){
        this.n = n;
    }

    void printPattern1(){
        int c=1;

        for(int i=1;i<=n;i++){
            for(int j=1;j<=(2*i-1);j++){
                System.out.print(c++ + " ");
            }
            System.out.println();
        }
    }

    void printPattern2(){
        for(int i=1;i<=n;i++){

            for(int j=1;j<=(n-i);j++){
                System.out.print("  ");
            }

            for(int j=i;j>=1;j--){
                System.out.print(j+" ");
            }

            for(int j=2;j<=i;j++){
                System.out.print(j+" ");
            }

            System.out.println();
        }
    }
}