import java.util.Scanner;

public class Bonus {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int year=sc.nextInt();

        String st="";
        if(year%100==0){
            if(year%400==0) st="Leap Year";
            else st="Not Leap Year";
        }
        else{
            if(year%4==0) st="Leap Year";
            else st="Not Leap Year";
        }
        System.out.println(st);

        sc.close();
    }
}
