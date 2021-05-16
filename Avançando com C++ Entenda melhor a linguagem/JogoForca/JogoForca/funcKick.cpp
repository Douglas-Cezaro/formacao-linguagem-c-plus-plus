#include <iostream>
#include "letter_exists.hpp"
#include "funcKick.hpp"

void funcKick(std::map<char, bool>* kicked, std::vector<char>* errors_kicks )
{
    std::cout << "Seu chute: ";
    char kick;
    std::cin >> kick;

    (*kicked)[kick] = true;

    if (letter_exists(kick))
    {
        std::cout << "Voce acertou! Seu chute esta na palavra." << std::endl;
    }
    else
    {
        std::cout << "Voce errou! Seu chute nao esta na palavra." << std::endl;
        errors_kicks->push_back(kick);
    }
    std::cout << std::endl;
}