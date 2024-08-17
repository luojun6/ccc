#include <iostream>
#include <limits>

using namespace std;

int main() {
    int number[] = { 10, 20, 30 };
    cout << "sizeof(int): " << sizeof(int) << endl;         
    cout << "sizeof(size_t): " << sizeof(size_t) << endl; 
    cout << "sizeof(long long): " << sizeof(long long) << endl; 
    cout << "std::numeric_limits<long long>::min()" << std::numeric_limits<long long>::min() << endl;   
    cout << "std::numeric_limits<long long>::max()" << std::numeric_limits<long long>::max() << endl;
    cout << "std::numeric_limits<size_t>::min()" << std::numeric_limits<size_t>::min() << endl;   
    cout << "std::numeric_limits<size_t>::max()" << std::numeric_limits<size_t>::max() << endl; 

    return 0;
}