// Write a Java program to reverse an array of integer values.
import java.util.Scanner;

public class Q3 {
    public static void main(String[] args) {
        Reverse rev = new Reverse();
        rev.reverseArray();
        rev.print();
    }
}

class Reverse{
    int arr[];

    Reverse(){
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

    public void reverseArray(){
        int i=0,j=arr.length-1;
        while(i < j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    public void print(){
        System.out.println("Sorted Order : ");
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
}