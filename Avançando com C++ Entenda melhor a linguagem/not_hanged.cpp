#include <vector>

extern std::vector<char> errors_kicks;
bool not_hanged()
{
    return errors_kicks.size() < 5;
}
