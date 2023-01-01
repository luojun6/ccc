#include <iostream>

using namespace std;

class Unique
{
private:
    int id;

public:
    static int next_id;

    Unique()
    {
        id = next_id;
        next_id++;
    }

    Unique(const Unique&) = delete;

    Unique& operator=(const Unique&) = delete;

    int get_id()
    {
        return id;
    }

};

int Unique::next_id = 1;

int main()
{

    Unique unique1;
    Unique unique2;
    Unique unique3;
    // Unique unique3 = unique1; // Disbale it by delete constructor.

    // unique3 = unique1; // Disbale it by delete operator =.

    cout << "unique1 id: " << unique1.get_id() << endl;
    cout << "unique2 id: " << unique2.get_id() << endl;
    cout << "unique3 id: " << unique3.get_id() << endl;

    return 0;
}