#include <iostream>
using namespace std;

int main()
{
    int year;
    int month;
    cout << "Please enter your age : ______" << endl;
    cin >> year;
    month = year * 12;
    cout  << "It include " << month << "months"<< endl;
    system("pause");
    return 0;
}