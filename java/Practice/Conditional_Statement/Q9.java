import java.util.Scanner;

public class Q9 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number : ");
        int i=sc.nextInt();

        String st="";
        switch(i){
            case 1:
                st="Monday";
                break;
            case 2:
                st="Tuesday";
                break;
            case 3:
                st="Wednesday";
                break;
            case 4:
                st="Thrusday";
                break;
            case 5:
                st="Friday";
                break;
            case 6:
                st="Saturday";
                break;
            case 7:
                st="Sunday";
                break;
            default:
                st="Number should be between 1 and 7";
        }
        System.out.println(st);

        sc.close();
    }
}
