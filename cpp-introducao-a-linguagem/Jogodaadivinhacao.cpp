#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    cout << "****************************************" << endl;
    cout << "* Bem - vindos ao jogo da adivinhacao! *" << endl;
    cout << "****************************************" << endl;

    cout << "Escolha o seu nivel de dificuldade: " << endl;
    cout << "Facil (F), Medio (M) ou dificil (D)" << endl;

    char difficulty;
    cin >> difficulty;

    int number_of_attempts;

    if (difficulty == 'F')
    {
        number_of_attempts = 15;
    }
    else if (difficulty == 'M')
    {
        number_of_attempts = 10;
    }
    else if (difficulty == 'D')
    {
        number_of_attempts = 5;
    }
    else
    {
        cout << "Dificuldade invalida" << endl;
        exit(1);
    }

    srand(time(NULL));
    const int SECRET_NUMBER = rand() % 100;

    bool incorrect = true;
    int attempts = 0;

    double points = 1000.0;

    for (attempts = 1; attempts <= number_of_attempts; attempts++)
    {
        int kick;

        cout << "Tentativa " << attempts << endl;
        cout << "Qual seu chute? ";
        cin >> kick;

        double lost_points = abs(kick - SECRET_NUMBER) / 2.0;
        points = points - lost_points;

        cout << "O valor do seu chute e: " << kick << endl;

        bool correct = kick == SECRET_NUMBER;

        bool big_kick = kick > SECRET_NUMBER;

        if (correct)
        {
            cout << "Parabens! Voce acertou o numero secreto" << endl;
            incorrect = false;
            break;
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
    if (incorrect)
    {
        cout << "Voce perdeu tente novamente!" << endl;
    }
    else
    {
        cout << "Voce acertou o numero secreto em " << attempts << " tentativas" << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuacao foi de " << points << " pontos." << endl;
    }
}