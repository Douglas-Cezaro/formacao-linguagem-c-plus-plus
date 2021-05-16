#include "incorrect.hpp"

bool incorrect(std::string secret_word, std::map<char, bool> kicked)
{
    for (char letter : secret_word)
    {
        if (!kicked[letter])
        {
            return true;
        }
    }
    return false;
}