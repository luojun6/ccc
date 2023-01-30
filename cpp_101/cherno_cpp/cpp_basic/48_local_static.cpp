#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Singleton
{
private: 
    static Singleton* _instance;
public:
    static Singleton& get() 
    {
        return *_instance;
    }

};

Singleton* Singleton::_instance = nullptr;

void func()
{
    static int i = 0;
    i++;
    cout << "func static i: " << i << endl;
}

int main()
{
    Singleton::get();

    func();
    func();
    func();

    return 0;
}