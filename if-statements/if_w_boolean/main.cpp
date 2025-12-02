#include <iostream>

int get_Value()
{
    int num{};
    std::cin >> num;

    return(num);
}

bool is_Equal(int x, int y)
{
    return(x == y);
}

int main()
{
    std::cout << "Enter value of x : ";
    int x{get_Value()};

    std::cout << "Enter value of y : ";
    int y{get_Value()};

    
    if(is_Equal(x,y))
        std::cout << x << " and " << y << " are equal!\n";
    else
        std::cout << x << " and " << y << " are not equal!\n";

}
