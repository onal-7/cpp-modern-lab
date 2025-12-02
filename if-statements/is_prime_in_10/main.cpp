#include <iostream>

int main()
{
    std::cout << "Enter an integer : ";
    int x{};
    std::cin >> x;

    if(x <= 9 && x >= 1)
    {
        if(x == 2 || x == 3 || 
            x == 5 || x == 7)
            std::cout << x << " is a prime number \n";
        else
            std::cout << x << " is not a prime number \n";
    }
    else
        std::cout << "Number is not in the range \n";

}
