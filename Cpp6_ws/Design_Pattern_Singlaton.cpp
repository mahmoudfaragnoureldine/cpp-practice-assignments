#include <iostream>
#include <vector>

class Logger
{
    private:
        static Logger* instance;
        std::vector<std::string> logs;
        Logger() {
            std::cout << "Logger Intializeed..." << std::endl;
        }
    public:
        Logger(const Logger& source) = delete;
        Logger& operator=(const Logger& source) = delete;
        static Logger* getInstance() {
            if (!instance)
                instance = new Logger();
            
            return instance;
        }
        void log(std::string message)
        {
            logs.push_back(message);
        }
        std::vector<std::string> getLogs() {
            return logs;
        }
        void remove() {
            if (instance)
                delete instance;
        }
        ~Logger() {
            std::cout << "Destractor..." << std::endl;
        }
};

Logger* Logger::instance = nullptr;

int main() {
    Logger* log_ptr1 = Logger::getInstance();
    log_ptr1->log("Message1");

    Logger* log_ptr2 = Logger::getInstance();
    log_ptr1->log("Message2");

    Logger* log_ptr3 = Logger::getInstance();
    log_ptr1->log("Message3");

    std::vector<std::string> msgs = log_ptr2->getLogs();

    for (const auto &msg : msgs)
    {
        std::cout << msg << std::endl;
    }
    
    log_ptr1->remove();

    return 0;
}