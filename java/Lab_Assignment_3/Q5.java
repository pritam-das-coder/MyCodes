// Write a Java program to calculate Sum of two 2-dimensional arrays.

import java.util.Scanner;

public class Q5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows of matrixes :");
        int r = sc.nextInt();
        System.out.print("Enter the number of columns of matrixes :");
        int c = sc.nextInt();
        int[][] a = new int[r][c];
        System.out.println("Enter the elements of matrix 1 :");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                a[i][j] = sc.nextInt();
            }
        }
        int[][] b = new int[r][c];
        System.out.println("Enter the elements of matrix 2 :");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                b[i][j] = sc.nextInt();
            }
        }
        SumOfMatrix som = new SumOfMatrix(a,b);
        som.add();
        sc.close();
    }
}

class SumOfMatrix{
    private int a[][];
    private int b[][];

    public SumOfMatrix(int[][] a, int[][] b){
        this.a = a;
        this.b = b;
    }

    public void add(){
        System.out.println("Sum of Matrix : ");
        for(int i=0;i<a.length;i++){
            for(int j=0;j<a[i].length;j++){
                System.out.print((a[i][j]+b[i][j])+" ");
            }
            System.out.println();
        }
    }
}