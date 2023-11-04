#include <iostream> //objetos globales std::count y std:cin
#include <format>   //permite el formato de texto
#include <string>   //cadenas de caracteres
#include <vector>   //contenedor secuencial de datos recomendado por defecto en c++
#include "pel_print.hpp" //libreria para hacer print

using namespace std;


auto incrementar_una_unidad(int n) -> void
{
    ++n;
}

auto incrementar_una_unidad_por_referencia(int& n) -> void
{
    ++n;
}


auto clase2 () -> int
{
    //auto i = int {1};
    //auto& j = i;        //j simplemente referencia a i, por tanto ++j es lo mismo que ++i
    //j++;
    //pel:: println("i={}, j={}", i, j);

    //
    auto i = int {1};

    incrementar_una_unidad(i);
    //i sigue siendo 1 porque no la hemos pasado como referencia, entonces se crea una copia de ella en la func
     pel:: println("i={}", i);
    
    incrementar_una_unidad_por_referencia(i);
    //ahora si se incrementa porque esta función si recibe el parametro por referencia
    pel:: println("i={}", i);
}