#include <iostream>
using namespace std;

double trans(double num1)
{
    double num2 = num1 * 63240;
    return num2;
}
int main()
{
    double lightyears;
    cout << "Enter the number of light years : ";
    cin >> lightyears;
    double ast = trans(lightyears);
    cout << lightyears << " light years = " << ast << " astronomical units." << endl;
    system("pause");
    return 0;
}