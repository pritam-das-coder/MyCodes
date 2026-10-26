// Write a Java Program to find the Consecutive Occurrence of any Vowel in a String.

import java.util.Scanner;

public class Q19 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string : ");
        String s = sc.nextLine();
        StringOperation so = new StringOperation(s);
        so.find();
        sc.close();
    }
}

class StringOperation{
    private String s;

    public StringOperation(String s){
        this.s = s;
    }

    private boolean isVowel(char ch){
        ch = Character.toLowerCase(ch);
        return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    }

    public void find(){
        System.out.println("Consecutive Occurences of Vowel: ");
        for(int i=0;i<s.length();i++){
            char ch = s.charAt(i);
            if(isVowel(ch)){
                String st = "";
                st+=ch;
                int j = i+1;
                while(j<s.length() && isVowel(s.charAt(j))){
                    st+=s.charAt(j);
                    j++;
                }
                if(st.length()>1) System.out.println(st);
                i = j-1;
            }
        }
    }
}