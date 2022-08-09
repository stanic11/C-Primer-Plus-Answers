#include <iostream>

int main(void)
{
    double length1 ;
    std::cout << "Please enter the distance between your home to your workspace" << std::endl;
    std::cin >> length1;
    double length;
    length = length1 * 220;
    std::cout << "And it is " << length << "Ma." << std::endl;
    system("pause");
    return 0;
    }