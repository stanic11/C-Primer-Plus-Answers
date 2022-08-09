#include <iostream>

int main()
{
    int carrots,carrots2;
    std::cout << "How many carrots do u have ?"  ;
    std::cin >> carrots;
    carrots2 = carrots -5;
    std::cout << "Now u only have " << carrots2 << "carrots.";
    system("pause");
    return 0;
}

