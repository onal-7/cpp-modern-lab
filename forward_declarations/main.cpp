#include <iostream>

int add(int,int); // There is no need to give parameters name!

int main()
{
    int x{add(2,4)};

    std::cout << x << '\n';

    return(0);
}

int add(int x, int y)
{
    return(x+y);
}
