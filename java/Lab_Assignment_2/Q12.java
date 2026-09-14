// Write a program to implement the Multiple Inheritance (Bank Interface,
// Customer & Account classes).

import java.util.Scanner;

public class Q12 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter the customer name : ");
        String name = sc.nextLine();
        System.out.println("Enter bank balance of customer : ");
        double balance = sc.nextDouble();

        Account ac = new Account(name, balance);
        ac.showAccount();
        
        sc.close();
    }
}

interface Bank {
    String getBankName();
}

class Customer {
    protected String customerName;

    Customer(String customerName) {
        this.customerName = customerName;
    }

    void showCustomer() {
        System.out.println("Customer: " + customerName);
    }
}

class Account extends Customer implements Bank {
    private double balance;

    Account(String customerName, double balance) {
        super(customerName);
        this.balance = balance;
    }

    @Override
    public String getBankName() {
        return "State Bank Of India";
    }

    void showAccount() {
        showCustomer();
        System.out.println("Bank: " + getBankName());
        System.out.println("Balance: " + balance);
    }
}
