#include <iostream>


int main()
{
    bool a{true};
    bool b{false};

    std::cout << a << '\n';
    std::cout << b << '\n';
    
    std::cout << std::boolalpha; // prints booleans in alphabet

    std::cout << a << '\n';
    std::cout << b << '\n';

    std::cout << std::noboolalpha;

    std::cout << a << '\n';
    std::cout << b << '\n';
}
