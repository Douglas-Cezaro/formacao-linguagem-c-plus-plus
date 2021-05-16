#include <string>

extern std::string secret_word;

bool letter_exists(char kick)
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