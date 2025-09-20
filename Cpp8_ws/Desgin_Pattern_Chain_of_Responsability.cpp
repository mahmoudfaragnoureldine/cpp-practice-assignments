#include <iostream>

class Handler
{
    protected:
        Handler* nextHandler;
    public:
        Handler(): nextHandler(nullptr) {}
        void setNextHandler(Handler* next) 
        {
            nextHandler = next;
        }
        virtual void hanldeRequest(int level)
        {
            if (nextHandler != nullptr)
                nextHandler->hanldeRequest(level);
        }
};

class LowLevelHandler: public Handler
{
    public:
        void hanldeRequest(int level) override
        {
            if (level <= 1)
                std::cout << "LowLevelHandler handle request with level " << level << std::endl;
            else if (nextHandler != nullptr)
                nextHandler->hanldeRequest(level);

        }
};

class MidLevelHandler: public Handler
{
    public:
        void hanldeRequest(int level) override
        {
            if (level == 1)
                std::cout << "MidLevelHandler handle request with level " << level << std::endl;
            else if (nextHandler != nullptr)
                nextHandler->hanldeRequest(level);

        }
};

class HighLevelHandler: public Handler
{
    public:
        void hanldeRequest(int level) override
        {
            if (level == 1)
                std::cout << "HighLevelHandler handle request with level " << level << std::endl;
            else if (nextHandler != nullptr)
                nextHandler->hanldeRequest(level);

        }
};