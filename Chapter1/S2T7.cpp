#include <iostream>
using namespace std;
void trans(int num1,int num2)
{    
    cout << "Time : ";
    cout << num1 << ":" << num2 << endl;
}

int main()
{
    int hours,mins;
    cout << "Enter the number of hours : " ;
    cin >> hours;
    cout << "Enter the number of minutes : ";
    cin >> mins ;
    trans(hours,mins);
    system("pause");
    return 0;
}

