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


//Es una buena práctica pasar las variables que no vamos a modificar por referencia y const
auto mi_println(string const& str) -> void
{
    cout << str << '\n';
}


auto clase2 () -> int
{
    //auto i = int {1};
    //auto& j = i;        //j simplemente referencia a i, por tanto ++j es lo mismo que ++i
    //j++;
    //pel:: println("i={}, j={}", i, j);

    //
    //auto i = int {1};

    //incrementar_una_unidad(i);
    //i sigue siendo 1 porque no la hemos pasado como referencia, entonces se crea una copia de ella en la func
    //pel::println("i={}", i);
    
    //incrementar_una_unidad_por_referencia(i);
    //ahora si se incrementa porque esta función si recibe el parametro por referencia
    //pel::println("i={}", i);


    //Cómo crear un puntero:
    //auto i = int {1};
    //int *p = &i;        //el puntero p guarda la dirección de memoria de i

    auto d = double{7.8};
    double* q = &d;


    //Ejercicio 1 Imprimir el valor de la variable i utilizando el puntero:
    auto i = int {1};
    int *p = &i;        //el puntero p guarda la dirección de memoria de i

    pel::println("i={}", *p);   //Como p es el puntero que tiene la dirección de i, con * accedemos a la dirección de p

    

    //Como crear un struct:

    struct Student{
        string name;
        double grade_1;
        double grade_2;
        double grade_3;

        auto average() -> double
        {
            return (grade_1 + grade_2 + grade_3) /3.0;
        }

    };

    auto my_student = Student("Miguelito", 7,6, 8);
    //usando el puntero accedo al valor de la variable, en vez de poner (*puntero) uso operador simplificado puntero->
    Student *puntero = &my_student;
    
    pel::println("name={}, average grade={:.2f}", puntero->name, puntero->average());

}