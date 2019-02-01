#include <iostream>
#include "termcolor.hpp"


int main()
{
    termcolor::gotoxy(5,6);
    std::cout <<"asdf";
    std::cout << termcolor::blue
    << termcolor::on_red
    << "Hello, Colorful World!"
    << std::endl;
    return 0;
}
