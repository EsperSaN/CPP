#include "ConverterHelper.hpp"

int main(int ac, char**av)
{
    (void) ac;
    std::string str(av[1]);
    std::string sub = ".f";

    if (ConverterHelper::isNumber(str))
        std::cout << "yep" << std::endl;
    else
        std::cout << "nope" << std::endl;

}

