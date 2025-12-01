#include <iostream>

int getValue()
{
    int num{};
    std::cin >> num;

    return(num);
}

bool isEqual(int x, int y)
{
    return(x == y);
}

int main()
{
    std::cout << "Enter value of x : ";   
    int x{getValue()};

    std::cout << "Enter value of y : ";
    int y{getValue()};


    std::cout << std::boolalpha;

    std::cout << x << " and " << y << " are equal? : ";
    std::cout << isEqual(x,y) << '\n';

    return(0);
    
}
