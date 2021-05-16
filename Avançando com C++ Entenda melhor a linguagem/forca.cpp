#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include "incorrect.hpp"
#include "letter_exists.hpp"
#include "print_header.hpp"
#include "word_draw.hpp"
#include "not_hanged.hpp"
#include "add_word.hpp"
#include "print_errors.hpp"
#include "print_word.hpp"
#include "funcKick.hpp"

using namespace std;

string secret_word = "MELANCIA";
map<char, bool> kicked;
vector<char> errors_kicks;

int main()
{
    print_header();

    word_draw();

    while (incorrect() && not_hanged())
    {
        print_errors();

        print_word();

        funcKick();
    }
    cout << "Fim de jogo!" << endl;
    cout << "A palavra secreta era: " << secret_word << endl;

    if (incorrect())
    {
        cout << "Voce perdeu, tente novamente!" << endl;
    }
    else
    {
        cout << "Voce ganhou, Parabens voce acertou a palavra secreta!" << endl;
        cout << "Voce deseja adicionar uma nova palavra ao banco? (S/N)" << endl;

        char response;
        cin >> response;
        if (response == 'S')
        {
            add_word();
        }
    }
    cin.get();
}