#include "incorrect.hpp"

bool incorrect(std::string& secret_word, const std::map<char, bool>& kicked)
{
    for (char letter : secret_word)
    {
        if (kicked.find(letter) == kicked.end() || !kicked.at(letter))
        {
            return true;
        }
    }
    return false;
}