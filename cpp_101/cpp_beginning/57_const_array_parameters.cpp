#include <iostream>

using namespace std;

void func(int &a)
{
    a = a + 1;

}

// void do_work(int array[])
// void do_work(int *array)
void do_work(const int array[])
{
    // array[2] = 99;

    cout << "array[2] = " << array[2] << endl;
}

int main()
{

    int x = 10;
    func(x);
    cout << "x: " << x << endl;

    int data[] = {1, 2, 3, 4, 5};
    do_work(data);

    for (int i = 0; i < 5; i++)
        cout << "data[" << i << "]: " << data[i] << endl;

    return 0;
}