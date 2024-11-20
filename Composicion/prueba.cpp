#include "Foco.hpp"
#include "Apagador.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "***** Pruebas de la clase Foco *****\n";
    Foco focoDef {};
    Foco focoComp {100,"Verde"};

    cout << "Datos foco default: " << focoDef.getLuminosidad() <<
        ", " << focoDef.getColor() << endl;

    cout << "Datos foco completo: " << focoComp.getLuminosidad() <<
        ", " << focoComp.getColor() << endl;
            
    cout << "\n***** Pruebas de la clase Apagador ****\n";
    Apagador miApaga {};
    cout << miApaga.isEncendido() << endl;
    miApaga.encender();
    cout << miApaga.isEncendido() << endl;
    miApaga.apagar();
    cout << miApaga.isEncendido() << endl;
    return 0;
}

