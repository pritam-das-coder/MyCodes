// Write a Java program to create a class known as "BankAccount" with
// methods called deposit() and withdraw(). Create a subclass called
// SavingsAccount that overrides the withdraw() method to prevent withdrawals
// if the account balance falls below one hundred.

import java.util.Scanner;

public class Q4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the account balance : ");
        double balance = sc.nextDouble();
        SavingsAccount sa = new SavingsAccount(balance);

        System.out.print("Enter the amount you want to deposit : ");
        double amt = sc.nextDouble();
        sa.deposit(amt);

        System.out.print("Enter the amount you want to withdraw : ");
        amt = sc.nextDouble();
        sa.withdraw(amt);

        System.out.println("Current Bank Balance : "+sa.getBalance());

        sc.close();
    }
}

class BankAccount{
    protected double balance;

    BankAccount(double balance){
        this.balance = balance;
    }

    void deposit(double amount){
        if(amount <= 0){
            System.err.println("Amount can't be negative or zero.");
        }
        else{
            balance += amount;
        }
    }

    void withdraw(double amount){
        if(amount <= 0 && amount > balance){
            System.err.println("Withdrawal not possible for such amount.");
        }
        else{
            balance -= amount;
        }
    }

    double getBalance(){
        return balance;
    }
}

class SavingsAccount extends BankAccount{
    SavingsAccount(double balance){
        super(balance);
    }

    @Override 
    void withdraw(double amount){
        if((balance - amount) < 100){
            System.err.println("Bank balance insufficient for withdrawal!");
        }
        else{
            super.withdraw(amount);
        }
    }
}