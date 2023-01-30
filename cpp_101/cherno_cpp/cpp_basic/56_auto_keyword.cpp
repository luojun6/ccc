#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// string get_name()
// char* get_name()
auto get_name() -> char*
{
    return "Lawjune";
}

class Device {};

class DeviceManager
{
private:
    std::unordered_map<std::string, std::vector<Device*>> _devices;

public:
    const std::unordered_map<std::string, std::vector<Device*>> get_device() const
    {
        return _devices;
    }
};

int main()
{
    // No need to change this line of code
    // If the API has been changed
    auto name = get_name();
    cout << name << endl;

    std::vector<string> fruits;
    fruits.push_back("Apple");
    fruits.push_back("Banana");

    // for (std::vector<string>::iterator it = fruits.begin();
    //      it != fruits.end(); it++)
    for (auto it = fruits.begin(); it != fruits.end(); it++)
         {
            cout << *it << endl;
         }

    DeviceManager dm;
    const auto& devices = dm.get_device();
    return 0;
}