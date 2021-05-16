#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "add_word.hpp"

std::vector<std::string> read_file()
{
    std::ifstream file;
    file.open("words.txt");

    if (file.is_open())
    {
        int size_words;
        file >> size_words;
        if (size_words == 0)
        {
            std::cout << "Nenhuma palavra no arquivo por favor insira palavras." << std::endl;
            std::cout << "Voce deseja adicionar uma nova palavra ao banco? (S/N)" << std::endl;

            char response;
            std::cin >> response;
            if (response == 'S')
            {
                add_word();
            }
            else
            {
                exit(0);
            }
        }
        std::vector<std::string> words_file;

        for (int i = 0; i < size_words; i++)
        {
            std::string word_read;
            file >> word_read;
            words_file.push_back(word_read);
        }

        file.close();
        return words_file;
    }
    else
    {
        std::cout << "Nao foi possivel acessar o banco de palavras." << std::endl;
        exit(0);
    }
}