// Write a Java program for following grading system.
//  Note: Percentage>=90% : Grade A
//  Percentage>=80% : Grade B
//  Percentage>=70% : Grade C
//  Percentage>=60% : Grade D
//  Percentage>=40% : Grade E
//  Percentage<40% : Grade F

import java.util.Scanner;

public class Q5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the percentage : ");
        double per = sc.nextDouble();

        GradeSystem gs = new GradeSystem(per);
        
        System.out.println("Grade : "+gs.calcGrade());

        sc.close();
    }
}

class GradeSystem{
    private double percentage;

    GradeSystem(double percentage){
        if(percentage > 100 || percentage < 0){
            System.out.println("Percentage should be 0 to 100");
            System.exit(0);
        }
        this.percentage = percentage;
    }

    char calcGrade(){
        if(percentage >= 90) return 'A';
        else if(percentage >= 80) return 'B';
        else if(percentage >= 70) return 'C';
        else if(percentage >= 60) return 'D';
        else if(percentage >= 40) return 'E';
        else return 'F';
    }
}