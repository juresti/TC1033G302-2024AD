#include "Apagador.hpp"
#include <iostream>

using namespace std;

Apagador::Apagador() : encendido{false} {}

void Apagador::encender(){
    cout << "Apagador se enciende\n";
    encendido = true;
}

void Apagador::apagar(){
    cout << "Apagador se apaga\n";
    encendido = false;
}

bool Apagador::isEncendido(){
    return encendido;
}
