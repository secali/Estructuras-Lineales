#include <iostream> //objetos globales std::count y std:cin
#include <format>   //permite el formato de texto
#include <string>   //cadenas de caracteres
#include <vector>   //contenedor secuencial de datos recomendado por defecto en c++
#include "pel_print.hpp" //libreria para hacer print

#include "clase1.cpp"
#include "clase2.cpp"

using namespace std;

auto main()  -> int
 {
    clase1();

    clase2();
}