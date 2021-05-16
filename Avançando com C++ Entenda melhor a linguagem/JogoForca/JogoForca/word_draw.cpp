#include <vector>
#include <ctime>
#include <cstdlib>
#include "read_file.hpp"

std::string word_draw()
{
    std::vector<std::string> words = read_file();

    srand(time(NULL));
    int index_sort = rand() % words.size();

    return words[index_sort];
}