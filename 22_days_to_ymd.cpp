#include <iostream>
using namespace std;
int main()

{
    int days,years, months;
    cout << "Enter total days: ";
    cin >> days;

    years = days / 365;
    days = days % 365;
    months = days / 30;
    days = days % 30;

    cout << "Years = " << years << endl;
    cout << "Months = " << months << endl;
    cout << "Days = " << days;

    return 0;
}
