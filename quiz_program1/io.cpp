#include <iostream>
#include "io.h"

int readNumber()
{
    int num;
    std::cin >> num;
    
    return(num);
}

void writeAnswer(int ans)
{
    std::cout << "Answer is " << ans << '\n';
}
