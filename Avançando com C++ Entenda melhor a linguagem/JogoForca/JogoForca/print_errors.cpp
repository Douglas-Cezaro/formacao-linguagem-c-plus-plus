#include <iostream>
#include "print_errors.hpp"

namespace Forca {

    void print_errors(const std::vector<char>& errors_kicks)
    {
        std::cout << "Chutes errados: ";
        for (char letter : errors_kicks)
        {
            std::cout << letter << " ";
        }
        std::cout << std::endl;
    }

}