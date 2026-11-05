// Write a Java program to find the EvenOddCounter of even and odd integers in a given
// array of integers
import java.util.Scanner;

public class Q2 {
    public static void main(String[] args) {
        EvenOddCounter eoc = new EvenOddCounter();
        eoc.findNoOfEvenOdd();
    }
}

class EvenOddCounter{
    int arr[];

    EvenOddCounter(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of array : ");
        int n = sc.nextInt();
        arr = new int[n];
        System.out.println("Enter "+n+" elements : ");
        for(int i = 0;i < n;i++){
            arr[i] = sc.nextInt();
        }
        sc.close();
    }

    public void findNoOfEvenOdd(){
        int even = 0, odd = 0;

        for(int i=0;i<arr.length;i++){
            if(arr[i]%2==0) even++;
            else odd++;
        }

        System.out.println("Number of even integers : "+even);
        System.out.println("Number of odd integers : "+odd);
    }
}