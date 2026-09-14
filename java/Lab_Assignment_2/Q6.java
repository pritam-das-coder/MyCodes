// Write a Java program to create a class called Employee with methods called
// work() and getSalary(). Create a subclass called HRManager that overrides
// the work() method and adds a new method called addEmployee().

import java.util.Scanner;

public class Q6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the salary of HR Manager : ");
        int salary = sc.nextInt();
        sc.nextLine();
        System.out.print("Enter the name of new employee : ");
        String name = sc.nextLine();

        HRManager hrm = new  HRManager(salary);
        hrm.work();
        hrm.addEmployee(name);
        System.out.println("Salary of HR Manager : "+hrm.getSalary());

        sc.close();
    }
}

class Employee{
    protected int salary;

    Employee(int salary){
        this.salary = salary;
    }

    void work(){
        System.out.println("Employee is working.");
    }

    int getSalary(){
        return salary;
    }
}

class HRManager extends Employee{
    HRManager(int salary){
        super(salary);
    }

    @Override 
    void work(){
        System.out.println("HRManager is working.");
    }

    void  addEmployee(String name){
        System.out.println("HRManger added "+name+" as a new Employee.");
    }
}