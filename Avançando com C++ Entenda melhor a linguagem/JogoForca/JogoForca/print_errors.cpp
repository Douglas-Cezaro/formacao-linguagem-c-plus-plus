#include <iostream>
#include "print_errors.hpp"

void print_errors(std::vector<char> errors_kicks)
{
    std::cout << "Chutes errados: ";
    for (char letter : errors_kicks)
    {
        std::cout << letter << " ";
    }
    std::cout << std::endl;
}
