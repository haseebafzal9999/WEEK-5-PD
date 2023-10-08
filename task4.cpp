#include <iostream>
#include <cmath>
using namespace std;
string projectTimeCalculation(int needed_hours, int days, int Workers);

int main()
{
    int hours, days, Workers;
    cout << "Enter the needed hours: ";
    cin >> hours;
    cout << "Enter the days that the firm has: ";
    cin >> days;
    cout << "Enter the number of all workers: ";
    cin >> Workers;
    cout << projectTimeCalculation(hours, days, Workers);
}
string projectTimeCalculation(int needed_hours, int days, int Workers)
{
    int working_hour = 0.9 * Workers * days * 10;
    int total_hours = working_hour - needed_hours;
    string x;
    if (total_hours > needed_hours)
    {

        x = "Yes!" + to_string(total_hours) + " hours left.";
    }
    if (total_hours < needed_hours)
    {
        x = "Not enough time!" + (to_string(abs(total_hours))) + "hours needed.";
    }
    return x;
}
