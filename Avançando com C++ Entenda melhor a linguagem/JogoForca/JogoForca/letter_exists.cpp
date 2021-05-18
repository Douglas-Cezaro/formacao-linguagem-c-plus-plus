#include "letter_exists.hpp"

bool letter_exists(char kick, std::string& secret_word)
{
    for (char letter : secret_word)
    {
        if (kick == letter)
        {
            return true;
        }
    }
    return false;
}