#include <iostream>

int add(int x, int y);

int main()
{
    int num{add(4,6)};

    std::cout << num << '\n';

    return(0);
}
