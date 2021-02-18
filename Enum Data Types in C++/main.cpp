#include <iostream>
using namespace std;

int main()
{
    enum Month // declares and defines the Month data type
    {
        January = 1, February, March, April, May, June, July, August, September, October, November, December
    };
    int userInput;
    cout << "Choose a number (1-12) to select a month: ";
    cin >> userInput;
    Month userMonth = static_cast<Month>(userInput); // declares userMonth, sets equal to userInput after casting userInput to data type Month
    cout << "Month selected: ";
    switch (userMonth)
    {
        case January:
            cout << "January";
            break;
        case February:
            cout << "February";
            break;
        case March:
            cout << "March";
            break;
        case April:
            cout << "April";
            break;
        case May:
            cout << "May";
            break;
        case June:
            cout << "June";
            break;
        case July:
            cout << "July";
            break;
        case August:
            cout << "August";
            break;
        case September:
            cout << "September";
            break;
        case October:
            cout << "October";
            break;
        case November:
            cout << "November";
            break;
        case December:
            cout << "December";
            break;
    }
}