// Write a program for matrix multiplication.

import java.util.Scanner;

public class Q7{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of rows of 1st matrix :");
        int r1 = sc.nextInt();
        System.out.print("Enter the number of columns of 1st matrix :");
        int c1 = sc.nextInt();
        int[][] A = new int[r1][c1];
        System.out.println("Enter the elements of 1st matrix :");
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                A[i][j] = sc.nextInt();
            }
        }

        System.out.print("Enter the number of rows of 2nd matrix :");
        int r2 = sc.nextInt();
        System.out.print("Enter the number of columns of 2nd matrix :");
        int c2 = sc.nextInt();
        int[][] B = new int[r2][c2];
        System.out.println("Enter the elements of 2nd matrix :");
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                B[i][j] = sc.nextInt();
            }
        }

        MatrixMultiply mm = new MatrixMultiply(A, B);
        mm.multiply();
        System.out.println("Resultant Matrix : ");
        mm.display();

        sc.close();
    }
}

class MatrixMultiply{
    int A[][];
    int rowA;
    int colA;
    int B[][];
    int rowB;
    int colB;
    int C[][];

    MatrixMultiply(int A[][], int B[][]){
        this.A = A;
        this.B = B;
        rowA = A.length;
        colA = A[0].length;
        rowB = B.length;
        colB = B[0].length;
        C = new int[rowA][colB];
    }

    void multiply(){ // C=AxB
        if(colA != rowB){
            System.out.println("Matrix Multiplication not possible.");
            System.exit(0);
        }

        for(int i=0;i<rowA;i++){
            for(int j=0;j<colB;j++){
                C[i][j] = 0;
                for(int k=0;k<rowB;k++){
                    C[i][j] += A[i][k]*B[k][j];
                }
            }
        }
    }

    void display(){
        for(int i=0;i<C.length;i++){
            for(int j=0;j<C[i].length;j++){
                System.out.print(C[i][j]+" ");
            }
            System.out.println();
        }
    }
}