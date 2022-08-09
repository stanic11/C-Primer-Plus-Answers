#include <iostream>
using namespace std;

double temperature(double num1)
{
    double num2 = 1.8 * num1 +32.0;
    return num2;
}

int main()
{
    double tem1;
    double tem2;

    cout << "Please enter a Celsius value: " ;
    cin >> tem1;
    tem2 = temperature(tem1);

    cout << tem1 << " degrees Celsius is " << tem2 <<" degrees Fahrenheit.";
    cout << endl;

    system("pause");
    return 0;
}