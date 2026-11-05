// Write a Java program to implement stack using array.
import java.util.Scanner;

public class Q4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Stack st = new Stack();
        boolean flag = true;
        System.out.println("-----MENU-----");
        System.out.println("1. Push into Stack");
        System.out.println("2. Pop from Stack");
        System.out.println("3. Show Stack Details");
        System.out.println("4. Exit");
        while(flag){
            System.out.print("Enter your choice : ");
            int ch=sc.nextInt();
            switch(ch){
                case 1:
                    System.out.print("Enter an element : ");
                    int ele = sc.nextInt();
                    st.push(ele);
                    break;
                case 2:
                    int x=st.pop();
                    if(x!=Integer.MIN_VALUE)
                        System.out.println("Element "+x+" popped");
                    break;
                case 3:
                    System.out.println("Size of stack : "+st.size());
                    st.display();
                    break;
                case 4:
                    System.out.println("Exiting...");
                    flag=false;
                    break;
                default:
                    System.out.println("Invalid choice.");
            }
        }
        sc.close();
    }
}

class Stack{
    private final int MAX=100;
    private int arr[];
    private int top;

    public Stack(){
        arr = new int[MAX];
        top=-1;
    }

    public void push(int ele){
        if(top==MAX-1){
            System.out.println("Stack Full.");
        }
        else{
            top++;
            arr[top]=ele;
        }
    }

    public int pop(){
        if(top==-1){
            System.out.println("Stack Empty.");
            return Integer.MIN_VALUE;
        }
        else{
            int data=arr[top];
            top--;
            return data;
        }
    }

    public int size(){
        return (top+1);
    }

    public int topElement(){
        if(top==-1){
            System.out.println("Stack Empty.");
            return Integer.MIN_VALUE;
        }
        return arr[top];
    }

    public void display(){
        System.out.println("Stack elements from bottom to top :");
        for(int i=0;i<=top;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
}