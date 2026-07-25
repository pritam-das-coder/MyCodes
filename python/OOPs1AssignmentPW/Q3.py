# 3.Create a simple banking system using object-oriented concepts in Python. Design classes representing
# different types of bank accounts such as savings and checking. Implement methods for deposit, withdraw,
# and balance inquiry. Utilize inheritance to manage different account types efficiently.
# Tasks:
#  Define base class(es) for bank accounts with common attributes and methods
#  Implement subclasses for specific account types (e.g., SavingsAccount, CheckingAccount)
#  Provide methods for deposit, withdraw, and balance inquiry in each subclass
#  Test the banking system by creating instances of different account types and performing transactions.
class Bank_Account:
    def __init__(self,balance,acc_no):
        self.balance=balance
        self.acc_no=acc_no
    def deposit(self,amount):
        self.balance+=amount
    def withdraw(self,amount):
        if self.balance>=amount:
            self.balance-=amount
        else:
            print("Insufficient bank balance")
    def balance_Inquiry(self):
        print(f"Current Account Balance : {self.balance}")

class Savings_Account(Bank_Account):
    def __init__(self,balance,acc_no,rate):
        super().__init__(balance,acc_no)
        self.rate=rate
    def calcInterest(self,time):
        amount=self.balance*self.rate*time
        self.balance+=amount
        print(f"Calculated Interest : {amount}")

class Checking_Account(Bank_Account):
    def __init__(self,balance,acc_no,overdraft_fee):
        super().__init__(balance,acc_no)
        self.overdraft_fee=overdraft_fee
    def withdraw(self,amount):
        if self.balance<amount:
            print("Applying for Overdraft Fee")
            amount+=self.overdraft_fee
        self.balance-=amount

def main():
    save_acc=Savings_Account(20000,"PNB20346",0.025)
    check_acc=Checking_Account(30000,"UC0093",25)
    
    save_acc.calcInterest(10)
    save_acc.balance_Inquiry()
    save_acc.deposit(3000)
    save_acc.calcInterest(25)
    save_acc.balance_Inquiry()

    check_acc.withdraw(40000)
    check_acc.balance_Inquiry()
    check_acc.deposit(30000)
    check_acc.balance_Inquiry()

if __name__ == '__main__' :
    main()


