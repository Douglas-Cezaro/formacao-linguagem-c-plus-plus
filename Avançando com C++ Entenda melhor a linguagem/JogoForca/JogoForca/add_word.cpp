#include <iostream>
#include "save_file.hpp"
#include "read_file.hpp"
#include "add_word.hpp"

void add_word()
{
    std::cout << "Digite a nova palavra, usando letras MAIUSCULAS." << std::endl;
    std::string new_word;
    std::cin >> new_word;

    std::vector<std::string> list_word = read_file();
    list_word.push_back(new_word);

    save_file(list_word);
}
