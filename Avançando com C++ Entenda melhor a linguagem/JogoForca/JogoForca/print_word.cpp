#include <iostream>
#include "print_word.hpp"

void Forca::print_word(std::string& secret_word, std::map<char, bool>& kicked)
{

    for (char letter : secret_word)
    {
        if (kicked[letter])
        {
            std::cout << letter << " ";
        }
        else
        {
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
}