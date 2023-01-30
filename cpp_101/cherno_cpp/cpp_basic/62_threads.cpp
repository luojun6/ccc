#include <iostream>
#include <thread>

using std::cout;
using std::cin;
using std::endl;

static bool s_finished = false;

void do_work()
{
    using namespace std::literals::chrono_literals;

    cout << "Started thread id: " 
         << std::this_thread::get_id() << endl;

    while(!s_finished)
    {
        cout << "Working...\n";
        std::this_thread::sleep_for(1s);
    }

}

int main()
{
    std::thread worker(do_work);

    cin.get(); // Waiting for press "Enter"
    s_finished = true;

    worker.join();
    cout << "Finished" << endl;
    cout << "Main thread id: " 
         << std::this_thread::get_id() << endl;

    cin.get();
}