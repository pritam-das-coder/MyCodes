// Write a program to accept a string from the user and find out the following
// statistics:
//  Count of uppercase character
//  Count of lowercase character
//  Count of digits
//  Count of spaces

import java.util.Scanner;

public class Q10 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string : ");
        String s = sc.nextLine();
        StringOperations so = new StringOperations(s);
        so.printStats();
        sc.close();
    }
}

class StringOperations{
    String s;

    StringOperations(String s){
        this.s = s;
    }

    int[] count(){
        int arr[] = new int[4];
        for(int i=0;i<s.length();i++){
            char ch = s.charAt(i);

            if(Character.isUpperCase(ch)) arr[0]++;
            else if(Character.isLowerCase(ch)) arr[1]++;
            else if(Character.isDigit(ch)) arr[2]++;
            else if(Character.isWhitespace(ch)) arr[3]++;
        }
        return arr;
    }

    void printStats(){
        int arr[] = count();
        System.out.println("Count of uppercase character: "+arr[0]);
        System.out.println("Count of lowercase character: "+arr[1]);
        System.out.println("Count of digits: "+arr[2]);
        System.out.println("Count of spaces: "+arr[3]);
    }
}