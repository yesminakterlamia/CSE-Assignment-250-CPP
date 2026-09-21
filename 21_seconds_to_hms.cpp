#include <iostream>
using namespace std;
int main()
{
    int seconds, hours, minutes;
    cout << "Enter total seconds: ";
    cin >> seconds;
    hours = seconds / 3600;
    seconds = seconds % 3600;
    minutes = seconds / 60;
    seconds = seconds % 60;
    cout << "Hours = " << hours << endl;
    cout << "Minutes = " << minutes << endl;
    cout << "Seconds = " << seconds;

    return 0;
}
