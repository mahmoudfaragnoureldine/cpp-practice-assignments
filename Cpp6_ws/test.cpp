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
        SavingsAccount(double _interestRate): interestRate(_interestRate) {}
        void calculateInterest()
        {
            balance *= interestRate;
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
        CheckingAccount(double _transactionFee): transactionFee(_transactionFee) {}
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
    BankAccount account1("20", 2000.55);
    SavingsAccount save1(0.3);
    CheckingAccount check1(0.6);

    account1.displayInfo();
    account1.deposit(500);
    account1.withdraw(200);
    std::cout << "-------------------------------------\n";
    save1.calculateInterest();
    save1.displayInfo();
    std::cout << "-------------------------------------\n";
    check1.deductTransactionFee();
    check1.displayInfo();

    return 0;
}