#include <iostream>
#include <string>
#include <map>

extern std::string secret_word;
extern std::map<char, bool> kicked;

void print_word()
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