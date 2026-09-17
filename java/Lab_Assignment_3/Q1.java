// Write a program to sort any list of given numbers.

import java.util.Scanner;

public class Q1{
    public static void main(String[] args) {
        Sort s = new Sort();
        s.sort();
        s.print();
    }
}

class Sort{
    int arr[];

    Sort(){
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

    public void sort(){
        for(int i = 0;i < arr.length - 1;i++){
            boolean flag = true;
            for(int j = i + 1;j < arr.length;j++){
                if(arr[j]<arr[i]){
                    flag = false;
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                } 
            }
            if(flag) break;
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