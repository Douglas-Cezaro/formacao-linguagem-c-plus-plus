#include <iostream>
#include <string>
#include <map>
#include <array>
#include "incorrect.hpp"
#include "letter_exists.hpp"
#include "print_header.hpp"
#include "word_draw.hpp"
#include "add_word.hpp"
#include "print_errors.hpp"
#include "print_word.hpp"
#include "funcKick.hpp"

using namespace std;


static string secret_word;
static map<char, bool> kicked;
static vector<char> errors_kicks;


int main()
{

    print_header();

    secret_word = word_draw();

    while (incorrect(secret_word, kicked) && errors_kicks.size() < 5)
    {
        using namespace Forca;
        print_errors(errors_kicks);

        print_word(secret_word, kicked);

        funcKick(&kicked, &errors_kicks, secret_word);
    }
    cout << "Fim de jogo!" << endl;
    cout << "A palavra secreta era: " << secret_word << endl;

    if (incorrect(secret_word, kicked))
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