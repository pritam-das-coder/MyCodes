// Write a program to implement the Multiple Inheritance (Gross Interface,
// Employee & Salary classes).

import java.util.Scanner;

public class Q13 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter employee name : ");
        String name = sc.nextLine();
        System.out.println("Enter tax rate in decimal : ");
        double tax_rate = sc.nextDouble();

        Employee employee = new Employee(name, tax_rate);
        System.out.println("In-hand salary of employee : " + employee.getSalary());

        sc.close();
    }
}

interface Gross{
    double gross_salary = 100000;
    double getGross();
}

class Employee extends Salary implements Gross{
    String name;

    Employee(String name, double tax_rate){
        super(tax_rate);
        this.name = name;
    }

    @Override 
    public double getGross(){
        return gross_salary;
    }

    double getSalary(){
        return calcSalary(gross_salary);
    }
}

class Salary{
    double tax_rate;

    Salary(double tax_rate){
        this.tax_rate = tax_rate;
    }

    double calcSalary(double gross_salary){
        double tax = tax_rate * gross_salary;
        return (gross_salary - tax);
    } 
}