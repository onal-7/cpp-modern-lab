#include <iostream>

 #define NAME "alex"

 int main()
 {

#ifdef NAME
    std::cout << NAME << '\n';
#endif

#if 0
    std::cout << "You cant see me!\n";
    /* How to compile this block??*/
#endif

#ifndef NAME
    std::cout << "There is no name" << '\n';
#endif
}
