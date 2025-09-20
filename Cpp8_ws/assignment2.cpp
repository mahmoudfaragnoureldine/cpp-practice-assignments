#include <iostream>
#include <memory>

class Book
{
    private:
        std::string title;
        std::string auther;
    public:
        Book(std::string _title, std::string _auther): title(_title), auther(_auther) {}
        void display() const {
            std::cout << "Title: " << title << std::endl;
            std::cout << "Auther: " << auther << std::endl;
        }
};

int main() {
    std::unique_ptr<Book> uptr = std::make_unique<Book>("CPP", "Mahmoud Farag");
    uptr->display();

    std::shared_ptr<Book> sptr(uptr.get());
    sptr->display();

    std::weak_ptr<Book> wptr(sptr);
    wptr.lock()->display();

    return 0;
}