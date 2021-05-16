#include <iostream>
#include <vector>

extern std::vector<char> errors_kicks;

void print_errors()
{
    std::cout << "Chutes errados: ";
    for (char letter : errors_kicks)
    {
        std::cout << letter << " ";
    }
    std::cout << std::endl;
}
