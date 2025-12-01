#include <iostream>

int getValue()
{
    int boolean{};
    
    std::cout << "Input an integer : ";
    std::cin >> boolean;

    return(boolean);
}

int main()
{
    bool a{};
    std::cin >> std::boolalpha;

    a = getValue();
    std::cout << a << '\n';
}
