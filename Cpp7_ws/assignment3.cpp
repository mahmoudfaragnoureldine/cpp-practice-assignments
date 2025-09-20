#include <iostream>

class Account
{
    protected:
        int accountNumber;
        std::string accountHolder;
        double balance;
    public:
        Account(int _accountNumber, std::string _accountHolder, double _balance): accountNumber(_accountNumber),
         accountHolder(_accountHolder), balance(_balance) {}
        void deposit(double amount)
        {
            balance += amount;
        }
        void withdraw(double amount)
        {
            balance -= amount;
        }
        void display()
        {
            std::cout << "Account Number: " << accountNumber << std::endl;
            std::cout << "Account Holder: " << accountHolder << std::endl;
            std::cout << "Account Balance: $" << balance << std::endl;
        }
};

class SavingsAccount: public Account
{
    private:
        double interestRate;
    public:
        SavingsAccount(int _accountNumber, std::string _accountHolder, double _balance, double _interestRate): 
            Account(_accountNumber, _accountHolder, _balance), interestRate(_interestRate) {}
        void calculateInterest() 
        {
            double interest = balance * interestRate;
            balance += interest;
            std::cout << "Interest calculated and add. New Balance: $" << balance << std::endl;
        }
};

class CheckingAccount: public Account
{
    private:
        double transactionFee;
    public:
        CheckingAccount(int _accountNumber, std::string _accountHolder, double _balance, double _transactionFee): 
            Account(_accountNumber, _accountHolder, _balance), transactionFee(_transactionFee) {}
        void deductTransactionFee() 
        {
            balance -= transactionFee;
            std::cout << "Transaction Fee deducted. New Balance: $" << balance << std::endl;
        }
};

int main() {
    SavingsAccount a(101, "Ahmed", 1000, 0.2);
    CheckingAccount b(201, "Mohammed", 1500, 0.2);

    a.display();
    a.calculateInterest();
    a.display();

    b.display();
    b.deductTransactionFee();
    b.display();

    return 0;
}