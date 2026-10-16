// Write a Java program to print transpose of matrix.

import java.util.Scanner;

public class Q6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows of matrix :");
        int r = sc.nextInt();
        System.out.print("Enter the number of columns of matrix :");
        int c = sc.nextInt();
        int[][] a = new int[r][c];
        System.out.println("Enter the elements of matrix :");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                a[i][j] = sc.nextInt();
            }
        }
        MatrixTranspose mt = new MatrixTranspose(a);
        mt.transpose();
        mt.display();
        sc.close();
    }
}
class MatrixTranspose{
    private int a[][];
    private int trans[][];

    public MatrixTranspose(int a[][]){
        this.a = a;
        trans = new int[a[0].length][a.length];
    }

    public void transpose(){
        for(int i=0;i<trans.length;i++){
            for(int j=0;j<trans[i].length;j++){
                trans[i][j]=a[j][i];
            }
        }
    }

    public void display(){
        System.out.println("Transpose Matrix : ");
        for(int i=0;i<trans.length;i++){
            for(int j=0;j<trans[i].length;j++){
                System.out.print(trans[i][j]+" ");
            }
            System.out.println();
        }
    }
}