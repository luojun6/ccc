#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Log
{
public: 
    enum level
    {
        ERROR = 0, WARNING, INFO
    };

    void set_level(int level)
    {
        _log_level = level;
    }

    void error(const char* message)
    {
        if (_log_level >= level::ERROR)
            cout << "[ERROR]: " << message << endl;
    }
    
    void warn(const char* message)
    {
        if (_log_level >= level::WARNING)
            cout << "[WARNING]: " << message << endl;
    }

    void info(const char* message)
    {
        if (_log_level >= level::INFO)
            cout << "[INFO]: " << message << endl;
    }

private:
    int _log_level = INFO;

};

int main()
{
    Log log;
    log.error("Error here?");
    log.warn("Warning?");

    return 0;
}