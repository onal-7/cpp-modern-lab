#include <iostream>

int getNumber()
{
    int num{};
    std::cout << "Get number : ";
    std::cin >> num;
    
    return(num);
}

int main()
{
    int x{getNumber()};

    std::cout << x << '\n';
}
