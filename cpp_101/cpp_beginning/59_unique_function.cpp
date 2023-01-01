#include <iostream>
#include <algorithm>  // std::unique
#include <vector>     // std::vector  

using namespace std;

bool match(int n1, int n2)
{
    return n1 == n2 && n1 < 10 && n2 < 10;
}

int main()
{
    vector<int> data = {9, 1, 1, 2, 3, 3, 2, 5, 12, 12};
    
    cout << "Before: ";
    for (auto it = data.begin(); it != data.end(); it++)
        cout << *it << " ";
    cout << endl;

    cout << "Before Size: " << data.size() << endl;

    auto new_end = unique(data.begin(), data.end(), match);

    cout << "After: ";
    for (auto it = data.begin(); it != new_end; it++)
        cout << *it << " ";
    cout << endl;

    cout << "After Size: " << data.size() << endl;

    data.resize(distance(data.begin(), new_end));

    cout << "After Resized: ";
    for (auto it = data.begin(); it != data.end(); it++)
        cout << *it << " ";
    cout << endl;

    cout << "After Resized Size: " << data.size() << endl;

    return 0;
}