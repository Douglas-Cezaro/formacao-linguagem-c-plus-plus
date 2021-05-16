#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

string secret_word = "MELANCIA";
map<char, bool> kicked;
// Vetor dinamico
vector<char> errors_kicks;

bool letter_exists(char kick)
{
    for (char letter : secret_word)
    {
        if (kick == letter)
        {
            return true;
        }
    }
    return false;
}

bool incorrect()
{
    for (char letter : secret_word)
    {
        if (!kicked[letter])
        {
            return true;
        }
    }
    return false;
}

bool not_hanged()
{
    return errors_kicks.size() < 5;
}

void print_header()
{
    cout << "*********************" << endl;
    cout << "*** Jogo da Forca ***" << endl;
    cout << "*********************" << endl;
    cout << endl;
}

void print_errors()
{
    cout << "Chutes errados: ";
    for (char letter : errors_kicks)
    {
        cout << letter << " ";
    }
    cout << endl;
}

void print_word()
{

    for (char letter : secret_word)
    {
        if (kicked[letter])
        {
            cout << letter << " ";
        }
        else
        {
            cout << "_ ";
        }
    }
    cout << endl;
}

void funcKick()
{
    cout << "Seu chute: ";
    char kick;
    cin >> kick;

    kicked[kick] = true;

    if (letter_exists(kick))
    {
        cout << "Voce acertou! Seu chute esta na palavra." << endl;
    }
    else
    {
        cout << "Voce errou! Seu chute nao esta na palavra." << endl;
        errors_kicks.push_back(kick);
    }
    cout << endl;
}

vector<string> read_file()
{
    ifstream file;
    file.open("words.txt");

    if (file.is_open())
    {
        int size_words;
        file >> size_words;
        if (size_words == 0)
        {
            cout << "Nenhuma palavra no arquivo por favor insira palavras." << endl;
            exit(0);
        }
        vector<string> words_file;

        for (int i = 0; i < size_words; i++)
        {
            string word_read;
            file >> word_read;
            words_file.push_back(word_read);
        }

        file.close();
        return words_file;
    }
    else
    {
        cout << "Nao foi possivel acessar o banco de palavras." << endl;
        exit(0);
    }
}

void word_draw()
{
    vector<string> words = read_file();

    srand(time(NULL));
    int index_sort = rand() % words.size();

    secret_word = words[index_sort];
}

void save_file(vector<string> new_list)
{
    ofstream file;
    file.open("words.txt");

    if (file.is_open())
    {
        file << new_list.size() << endl;
        for (string word : new_list)
        {
            file << word << endl;
        }
        file.close();
    }
    else
    {
        cout << "Nao foi possivel acessar o banco de palavras." << endl;
        exit(0);
    }
}
void add_word()
{
    cout << "Digite a nova palavra, usando letras MAIUSCULAS." << endl;
    string new_word;
    cin >> new_word;

    vector<string> list_word = read_file();
    list_word.push_back(new_word);

    save_file(list_word);
}

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
}