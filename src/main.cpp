#include <iostream>//flujos de entrada y salida 
#include<ftxui/screen/screen.hpp>
#include<ftxui/dom/elements.hpp>
#include<thread>//hilos de proceso
#include<fstream>//flujos de archivos
#include<string>//control de cadenas
#include<Dibujo.hpp>
using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    Dibujo kong("./assets/images/kong.txt");
    Dibujo mario("assets/images/mario.txt");
    int fotograma=0;
    while (true)
    {
        this_thread::sleep_for(0.1s);
        fotograma ++;
        Element dibujo= vbox({kong.GetElement(),mario.GetElement()});
        //Screen pantalla 

    }
    return EXIT_SUCCESS;

}