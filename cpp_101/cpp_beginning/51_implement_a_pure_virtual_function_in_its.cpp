#include <iostream>

using namespace std;

class Logger
{
public:

    static int total;

    virtual void log(string message) = 0;

    virtual ~Logger() {};

};


int Logger::total = 0;
void Logger::log(string message)
{
    total += message.length();
}


class ConsoleLogger : public Logger
{
public:

    void log(string message)
    {
        Logger::log(message);
        cout << "Log: " << message << endl;

    }
};

int main()
{
    Logger *logger = new ConsoleLogger();

    logger->log("abc");
    logger->log("1234");

    cout << "Total: " << Logger::total << endl;

    delete logger;

    return 0;
}