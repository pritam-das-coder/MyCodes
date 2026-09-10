// Java program to Perform Payroll Using Interface (Multiple Inheritance).

import java.util.Scanner;

public class Q15 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter employee's name : ");
        String name = sc.nextLine();
        System.out.println("Enter employee's ID : ");
        int id = sc.nextInt();
        System.out.println("Enter employee's basic salary : ");
        double basicSalary = sc.nextDouble();

        Employee employee = new Employee(id, name, basicSalary);
        employee.displaySalarySlip();

        sc.close();
    }
}

interface Earnings{
    double calcDA();
    double calcHRA();
}

interface Deductions{
    double calcPF();
    double calcTax();
}

class Employee implements Earnings, Deductions{
    private int employeeId;
    private String employeeName;
    private double basicSalary;

    Employee(int employeeId, String employeeName, double basicSalary){
        this.employeeId = employeeId;
        this.employeeName = employeeName;
        this.basicSalary = basicSalary;
    }

    public double calcDA(){
        return (0.50 * basicSalary);
    }    

    public double calcHRA(){
        return (0.2 * basicSalary);
    }

    public double calcPF(){
        return (0.12 * basicSalary);
    }

    public double calcTax(){
        return (0.10 * basicSalary);
    }

    public double calculateNetSalary(){
        return ((basicSalary + calcHRA() + calcDA())-(calcPF() + calcTax()));
    }

    public void displaySalarySlip(){
        System.out.println("------Payslip------");
        System.out.println("Employee's ID : "+employeeId);
        System.out.println("Employee's Name : "+employeeName);
        System.out.println("Employee's Basic Salary : "+basicSalary);
        System.out.println("Employee's DA : "+calcDA());
        System.out.println("Employee's HRA : "+calcHRA());
        System.out.println("Employee's PF : "+calcPF());
        System.out.println("Employee's Tax : "+calcTax());
        System.out.println("Employee's Net Salary : "+calculateNetSalary());
    }
}