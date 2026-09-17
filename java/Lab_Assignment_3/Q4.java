// Write a Java program to implement stack using array.
import java.util.Scanner;

public class Q4 {
    public static void main(String[] args) {
        
    }
}

class Stack{
    int arr[];

    Stack(){
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
}