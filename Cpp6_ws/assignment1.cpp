#include <iostream>

class BankAccount
{
    protected:
        std::string accountNumber;
        double balance;
    public:
        BankAccount(std::string accountNumber, double balance)
        {
            this->accountNumber = accountNumber;
            this->balance = balance;
        }
        void deposit(double amount)
        {
            balance += amount;
        }
        void withdraw(double amount)
        {
            balance -= amount;
        }
        virtual void displayInfo() const
        {
            std::cout << "Account Number: " << accountNumber << std::endl;
            std::cout << "Balance: " << balance << std::endl;
        }
        virtual ~BankAccount() = default;
};

class SavingsAccount : public BankAccount
{
    private:
        double interestRate;
    public:
        SavingsAccount(std::string accountNumber, double balance, double _interestRate): BankAccount(accountNumber, balance),
         interestRate(_interestRate) {}
        void calculateInterest()
        {
            balance = balance - (balance * interestRate);
        }
        void displayInfo() const override
        {
            std::cout << "Interest Rate: " << interestRate << std::endl;
            std::cout << "Balance: " << balance << std::endl;
        }
        virtual ~SavingsAccount() = default;
};

class CheckingAccount : public BankAccount
{
    private:
        double transactionFee;
    public:
        CheckingAccount(std::string accountNumber, double balance, double _transactionFee): BankAccount(accountNumber, balance), 
         transactionFee(_transactionFee) {}
        void deductTransactionFee()
        {
            balance -= transactionFee;
        }
        void displayInfo() const override
        {
            std::cout << "Account Number: " << accountNumber << std::endl;
            std::cout << "Balance: " << balance << std::endl;
            std::cout << "Transaction Fee: " << transactionFee << std::endl;
        }
        virtual ~CheckingAccount() = default;
};

int main() {
    SavingsAccount save1("20", 2000.5, 0.2);
    CheckingAccount check1("23", 3000, 0.3);

    save1.displayInfo();
    save1.deposit(500);
    save1.withdraw(300);
    save1.calculateInterest();
    std::cout << "------------------------\n";
    save1.displayInfo();

    std::cout << "------------------------\n";

    check1.displayInfo();
    check1.deposit(500);
    check1.withdraw(300);
    check1.deductTransactionFee();
    std::cout << "------------------------\n";
    check1.displayInfo();
    return 0;
}