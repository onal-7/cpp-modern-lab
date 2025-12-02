#include <iostream>

int abs(int x,int y)
{
    int abs{x-y};

    if(abs < 0)
        return(-abs);
    else
        return(abs);
}



int main()
{
    std::cout << "Enter value of x : ";
    int x{};
    std::cin >> x;

    std::cout << "Enter value of y : ";
    int y{};
    std::cin >> y;

    std::cout << "Absolute distance of x and y : ";
    std::cout << abs(x,y) << '\n';
}
