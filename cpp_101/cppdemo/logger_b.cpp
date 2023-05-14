#include <iostream>
#include "logger.hpp"

using std::string; 
using std::cout;
using std::endl;

int Logger::total = 0;
void Logger::log(string message)
{
    total++;
}

class ConsoleLogger : public Logger
{
public:

    void log(string message)
    {
        Logger::log(message);
        cout << "Log[B]: " << message << endl;

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