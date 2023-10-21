#include <iostream> //objetos globales std::count y std:cin
#include <format>   //permite el formato de texto
#include <string>   //cadenas de caracteres
#include <vector>   //contenedor secuencial de datos recomendado por defecto en c++

using namespace std;

class S
{
    // Por defecto todos los elementos de una clase son privados
    int id;

public:
    // Constructor
    S(int idx)
    {
        id = idx;

        cout << "Creating object #" << id << "\n";
    };

    // Destructor
    ~S()
    {
        cout << "Destroying object #" << id << "\n";
    }
};

//  Auto permite identificar el tipo por el contexto
//  En c++11: auto main () -> int //
int main()
{
    // auto n = int{1};
    // auto d = double{9.8};
    // auto c = char {'a'};

    auto s1 = S(1);
    auto s2 = S(2);

    {
        auto s3 = S(3);
        auto s4 = S(4);
    }
    auto s5 = S(5);
    // C++ no es como java, las variables se destruyen cuando dejan su contexto (no son dinámicas)

    // ##################################################################################################
    // ##################################################################################################

    // Inicializar un vector de strings vacio
    auto nameVector = vector<string>{};

    auto nameInput = string{}; // String inicialmente vacio
    cout<<"Insert a name: ";
    while (getline(cin, nameInput))
    {
        nameVector.push_back(nameInput); // introduce al final del vector el string
        cout<<"Insert a text: ";
    }

    // Visitamos el vector de Strings
    for (string nameExtracted : nameVector)
    {
        cout <<"->"<< nameExtracted << "\n";
    }

    return 0;
}