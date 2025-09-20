#include <iostream>
#include <vector>
#include <limits>
#include <windows.h>

class bankAccount
{
    private:
        int accountNumber;
        std::string accountHolderName;
        std::string accountType;
        int accountBalance;
    public:
        bankAccount(int accountNumber, std::string accountHolderName, std::string accountType, int accountBalance)
        {
            this->accountNumber = accountNumber;
            this->accountHolderName = accountHolderName;
            this->accountType = accountType;
            this->accountBalance = accountBalance;
        }
        void Deposit(int funds)
        {
            accountBalance += funds;
        }
        void Withdraw(int funds)
        {
            accountBalance -= funds;
        }
        int GetAccountNumber() const { return accountNumber; }
        std::string GetAccountHolder() const { return accountHolderName; }
        std::string GetAccountType() const { return accountType; }
        int GetAccountBalance() const { return accountBalance; }
        void DisplayAccountInfo() const
        {
            std::cout << "Account Number: " << accountNumber << std::endl;
            std::cout << "Account Holder: " << accountHolderName << std::endl;
            std::cout << "Account Type: " << accountType << std::endl;
            std::cout << "Account Balance: " << accountBalance << std::endl;
        }
};

class Bank
{
    private:
        int totalBalance;
    public:
        std::vector<bankAccount> accounts;
        void AddAcount(bankAccount account)
        {
            accounts.push_back(account);
        }
        int GetTotalBalance()
        {
            totalBalance = 0;
            for (const auto &i : accounts)
            {
                totalBalance += i.GetAccountBalance();
            }
            std::cout << "Total Balance = " << totalBalance << std::endl;
        }
        void DisplayAllAccounts() const
        {
            for (const auto &i : accounts)
            {
                i.DisplayAccountInfo();
            }
            
        }
};

void addAccount();
void makeDeposit();
void makeWithdraw();


Bank bank1;

int main() {
    int number, balance;
    std::string name, type;
    int choice;
    while (1)
    {
        std::cout << "1.    Create an account\n2.    Deposit funds\n" << 
            "3.    Withdraw funds\n4.    Total balance\n" << 
            "5.    Display all accounts\n6.    Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            addAccount();
            break;
        
        case 2:
            makeDeposit();
            break;

        case 3:
            makeWithdraw();
            break;

        case 4:
            bank1.GetTotalBalance();
            Sleep(3000);
            break;

        case 5:
            bank1.DisplayAllAccounts();
            Sleep(3000);
            break;

        case 6:
            return 0;
        
        default:
            std::cout << "Wrong choice, please try again.\n";
            break;
        }
    }
}

void addAccount()
{
    int number, balance;
    std::string name, type;

    std::cout << "Enter the account number: ";
    std::cin >> number;

    std::cout << "Enter the account holder name: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, name);

    std::cout << "Enter the account type: ";
    std::getline(std::cin, type);

    std::cout << "Enter the account balance: ";
    std::cin >> balance;

    bank1.AddAcount(bankAccount(number, name, type, balance));

    std::cout << "Account created successfully\n";

    Sleep(3000);
}

void makeDeposit()
{
    int funds;

    std::cout << "Enter your deposit: ";
    std::cin >> funds;

    bank1.accounts.at(0).Deposit(funds);
    Sleep(3000);
}

void makeWithdraw()
{
    int funds;

    std::cout << "Enter your withdraw: ";
    std::cin >> funds;

    bank1.accounts.at(0).Withdraw(funds);
    Sleep(3000);
}