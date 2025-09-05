#include <iostream>

class BankAccount {
    private:
        std::string _userName;
        int _password;
        int _accountNumber;
        int _balance;

    public:
        BankAccount():_balance(1000) {
            std::cout << "Enter your user name: " <<  std::endl;
            std::cin >> _userName;
            std::cout << "Enter your password: " <<  std::endl;
            std::cin >> _password;

        }
        void show() {
            std::cout << "Enter your user balance: " << _balance << std::endl;
        }
        void deposit() {
            int x;
            std::cout << "Enter deposit: ";
            std::cin >> x;
        }
        void withdrow() {
            int y;
            std::cout << "Enter withdrow: ";
            std::cin >> y;
        }
        ~BankAccount() {
            std::cout << "bye" << std::endl;
        }
};

int main() {
    BankAccount user1;
    user1.show();
    user1.deposit();
    user1.withdrow();
    return 0;
}