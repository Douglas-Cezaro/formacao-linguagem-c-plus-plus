#include <iostream>

using namespace std;

int main()
{
    cout << "****************************************" << endl;
    cout << "* Bem - vindos ao jogo da adivinhacao! *" << endl;
    cout << "****************************************" << endl;

    const int SECRET_NUMBER = 42;

    bool incorrect = true;
    int attempts = 0;

    while (incorrect)
    {
        attempts++;
        int kick;

        cout << "Tentativa " << attempts << endl;
        cout << "Qual seu chute? ";

        cin >> kick;

        cout << "O valor do seu chute e: " << kick << endl;

        bool correct = kick == SECRET_NUMBER;

        bool big_kick = kick > SECRET_NUMBER;

        if (correct)
        {
            cout << "Parabens! Voce acertou o numero secreto" << endl;
            incorrect = false;
        }
        else if (big_kick)
        {
            cout << "Seu chute foi maior que o numero secreto!" << endl;
        }
        else
        {
            cout << "Seu chute foi menor que o numero secreto!" << endl;
        }
    }
    cout << "Fim de jogo!" << endl;
    cout << "Voce acertou o numero secreto em " << attempts << " tentativas" << endl;
}