#ifndef logger_hpp
#define logger_hpp

#include <iostream>

using std::string;

class Logger
{
public:

    static int total;
    virtual void log(string message) = 0;
    virtual ~Logger() {};

};

#endif

