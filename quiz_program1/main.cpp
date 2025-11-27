#include <iostream>
#include "io.h"

int main()
{
    std::cout << "Enter 1. integer\n";
    int unum1{readNumber()};
    
    std::cout << "Enter 2. integer\n";
    int unum2{readNumber()};

    writeAnswer(unum1+unum2);

}
