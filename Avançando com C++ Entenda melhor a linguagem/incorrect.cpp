#include <string>
#include <map>

extern std::string secret_word;
extern std::map<char, bool> kicked;

bool incorrect()
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