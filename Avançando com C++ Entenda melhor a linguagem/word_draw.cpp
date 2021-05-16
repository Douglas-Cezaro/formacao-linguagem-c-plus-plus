#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "read_file.hpp"

extern std::string secret_word;

void word_draw()
{
    std::vector<std::string> words = read_file();

    srand(time(NULL));
    int index_sort = rand() % words.size();

    secret_word = words[index_sort];
}